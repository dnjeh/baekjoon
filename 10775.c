#include <stdio.h>
int q[100100], a[100001], g, p;
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
    int i, cnt=0, t, t1, t2;
    scanf("%d %d", &g, &p);
    for(i=1;i<=g;i++) {
        a[i]=i;
    }
    for(i=0;i<p;i++) {
        scanf("%d", &t);
        t1=find(t);
        if(t1) {
            cnt++;
            a[t1]=t1-1;
        } 
        else {
            break;
        }
    }
    printf("%d", cnt);
}