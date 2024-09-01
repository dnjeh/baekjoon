#include <stdio.h>
#define MAX 1000
#define LOG 11 
int n, parent[MAX][LOG], dep[MAX], a[MAX][MAX];

void dfs(int now, int depth) {
	dep[now]=depth;
	for(int i=0;i<1000;i++) {
		if(a[now][i]) dfs(i, depth+1);
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
	scanf("%d %d", &n, &m);
    for(int i=1;i<n;i++) {
        scanf("%d", &parent[i][0]);
        parent[i][0]--;
        if(parent[i][0]!=i) a[parent[i][0]][i]=1;
    }
    setParent();
    for(int i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        printf("%d\n", lca(t, tt)+1);
    }
}