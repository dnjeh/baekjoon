#include <stdio.h>
#include <stdlib.h>
#define MAX 100100
#define LOG 17
int n, parent[MAX][LOG], dep[MAX], aind=0, vis[MAX];
long long int a[MAX*2];

int compare(const void* a, const void* b) {
    long long int t = (*(long long int(*))a)-(*(long long int(*))b);
    return t>0?1:t<0?-1:0;
}

long long int ubs(long long int end) {
    long long int up, dwn, mid;
    up=aind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
long long int lbs(long long int end) {
    long long int up, dwn, mid;
    up=aind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}

void dfs(long long int now, int depth) {
    //for(int i=0;i<depth;i++) printf("*");
    //printf("%lld\n", now);
    long long int i, sta=lbs(now*100000), end=lbs((now+1)*100000);
	dep[now]=depth;
    vis[now]=1;
	for(i=sta;i<end;i++) {
        int t=a[i]%100000;
        if(!vis[t]) {
        //printf("%lld\n", a[i]);
            parent[t][0]=now;
            dfs(t, depth+1);
        }
    }
}
void setParent() {
    dfs(0, 0);
	for(int j=1;j<LOG;j++) {
		for(int i=0;i<n;i++) {
			parent[i][j]=parent[parent[i][j-1]][j-1];
		}
	}
}

int lca(int t, int tt) {
    int _t;
	if(dep[t]>dep[tt]) {
        _t=t;
        t=tt;
        tt=_t;
	}
	for(int i=LOG-1;i>=0;i--) {
		if(dep[tt]-dep[t]>=(1<<i)) {
			tt=parent[tt][i];
		}
	}
	if(t==tt) return t;
	for(int i=LOG-1;i>=0;i--) {
		if(parent[t][i] != parent[tt][i]) {
			t = parent[t][i];
			tt = parent[tt][i];
		}
	}
	return parent[t][0];
} 

int main() {
    int t, tt, m;
	scanf("%d", &n);
    for(int i=1;i<n;i++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        a[aind++]=(long long int)t*100000+(long long int)tt;
        a[aind++]=(long long int)tt*100000+(long long int)t;
    }
    qsort(a, aind, sizeof(a[0]), compare);
    //for(int i=0;i<aind;i++) {
    //    printf("%lld\n", a[i]);
    //}
    setParent();
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        printf("%d\n", lca(t, tt)+1);
    }
}