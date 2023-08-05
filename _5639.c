#include <stdio.h>
int tre[1000000][2], a[10000], n, ind;
int pre(int t, int rot) {   
    int it=a[++ind], tt;
    if(it>rot) return it;
    if(it<t) {
        tre[t][0]=it;
        tt=pre(it, t);
        if(tt) it=tt;
    }
    if(tt&&tt>rot) return tt;
    if(it>t||(ind+1<n&&(it=a[++ind])>t)) {
        tre[t][1]=it;
        tt=pre(it, t==a[0]?1000000:t);
    }
    if(tt&&tt>rot) return tt;
    return 0;
}
void pos(int now) {
    if(tre[now][0]) pos(tre[now][0]);
    if(tre[now][1]) pos(tre[now][1]);
    printf("%d\n", now);
}
int main() {
    int i, t;
    for(i=0;scanf("%d", &t)!=EOF;i++) {
        a[i]=t;
    } n=i;
    pre(a[0], 1000000);
    pos(a[0]);
}