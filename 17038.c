#include <stdio.h>
int a[200001], b[100001], q[100100], n, m;
void set();
int find(int t) {
    int ind=1, i, ret;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=a[q[i]]) {
            q[ind++]=a[q[i]];
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) a[q[i]]=ret;
    return ret;
}
void merge(int t1, int t2) {
    t1=find(t1); t2=find(t2);
    if(t1>t2) a[t1]=t2;
    else a[t2]=t1;
}
int main() {
    int i, j, t1, t2, ans=0;
    char mod;
    scanf("%d %d", &n, &m); set();   
    for(i=0;i<m;i++) {
        scanf("\n%c %d %d", &mod, &t1, &t2);
        if(mod=='S') {
            merge(t1, t2);
            merge(t1+n, t2+n);
        }
        else {
            merge(t1, t2+n);
            merge(t1+n, t2);
        }
    }
    for(int i=1;i<=n;i++) {
        if(find(i)==find(i+n)) {
            printf("0");
            return 0;
        }
    }
    for(int i=1;i<=n;i++) {
        merge(i, i+n);
    }
    for(int i=1;i<=n;i++) {
        if(!b[find(i)]) {
            b[find(i)]=1;
            ans++;
        }
    }
    printf("1");
    for(int i=0;i<ans;i++) printf("0");
}

void set() {
    int i;
    for(i=0;i<=n*2;i++) a[i]=i;
}
