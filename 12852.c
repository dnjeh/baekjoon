#include <stdio.h>
int q[2][1000100], vis[1000001], qind=1;
void qput(int t, int tt) {
    vis[t]=1;
    q[0][qind]=t;
    q[1][qind]=tt;
    qind++;
}
void fun(int t) {
    if(t) fun(q[1][t]);
    printf("%d ", q[0][t]);
}
int main() {
    int t, i, cnt, ind;
    scanf("%d", &q[0][0]);
    for(cnt=i=0;qind<ind;cnt++) {
    for(ind=qind;i<qind;i++) {
        if(q[0][i]==1) {
            printf("%d\n", cnt);
            fun(i);
            return 0;
        }
        else {
            if(!(q[0][i]%3)&&!vis[q[0][i]%3]) qput(q[0][i]/3, i); 
            if(!(q[0][i]%2)&&!vis[q[0][i]%2]) qput(q[0][i]/2, i); 
            if(q[0][i]-1>0&&!vis[q[0][i]-1]) qput(q[0][i]-1, i); 
        }
    }
    }
}