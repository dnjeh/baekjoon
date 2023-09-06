#include <stdio.h>
int a[500000], q[100100], n;
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
void set();
int main() {
    int m, i, j, t, tt, ttt;
    scanf("%d %d", &n, &m);
    set();
    for(i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        if(find(t)==find(tt)) {
            printf("%d", i+1);
            return 0;
        }
        else {
            t=find(t); tt=find(tt);
            if(t>tt) a[t]=tt;
            else a[tt]=t;
        }
    }
    printf("0");
}
void set() {
    for(int i=0;i<n;i++) {
        a[i]=i;
    }
}