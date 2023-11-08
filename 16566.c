#include <stdio.h>
int a[4000001], b[4000001], q[4000100];
int n, m, k;
int find(int t) {
    int ind=1, i, ret;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=a[q[i]]) {
            q[ind++]=a[q[i]];
        }
        else if(!b[q[i]]) {
            q[ind++]=q[i]+1;
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) a[q[i]]=ret;
    return ret;
}
void set();
int main() {
    int i, t, t1, t2; 
    scanf("%d %d %d", &n, &m, &k);
    set();
    for(i=0;i<m;i++) {
        scanf("%d", &t);
        b[t]=1;
    }
    for(i=0;i<k;i++) {
        scanf("%d", &t1);
        t1++;
        t1=find(t1); t2=find(t1+1);
        printf("%d\n", t1);
        if(t1<t2) a[t1]=t2;
        else a[t2]=t1;
    }
}

void set() {
    int i;
    for(i=1;i<=n;i++) {
        a[i]=i;
    }
}