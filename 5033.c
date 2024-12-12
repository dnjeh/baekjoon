#include <stdio.h>
int a[10001], b[10001], c[10001], q[10010], n, m;
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
int main() {
    int mod, t1, t2;
    scanf("%d %d", &n, &m); set();   
    for(int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        t1=find(t1); t2=find(t2);
        if(t1>t2) a[t1]=t2;
        else a[t2]=t1;
    }
    for(int i=0;i<n;i++) {
        c[find(i)]+=b[i];
    }
    for(int i=0;i<n;i++) {
        if(c[i]) {
            printf("IMPOSSIBLE");
            return 0;
        }
    }
    printf("POSSIBLE");
}

void set() {
    int i;
    for(i=0;i<=n;i++) a[i]=i;
}
