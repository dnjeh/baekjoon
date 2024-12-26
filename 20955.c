#include <stdio.h>
int a[100001], q[100100], n, m;
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
    int i, j, t1, t2, ans;
    scanf("%d %d", &n, &m); set();   
    ans=n-1;
    for(i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        t1=find(t1); t2=find(t2);
        if(t1==t2) {
            ans++;
            continue;
        }
        else if(t1>t2) a[t1]=t2;
        else a[t2]=t1;
        ans--;
    }
    printf("%d", ans);
}

void set() {
    int i;
    for(i=0;i<=n;i++) a[i]=i;
}