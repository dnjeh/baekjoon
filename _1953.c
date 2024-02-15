#include <stdio.h>
int a[101][101], b[101], cnt, n; //0이 갈 수 있다 //1일때 cnt 증가
int dfs(int now, int sta, int f) {
    if(now==sta) {
        for(int i=1;i<=100;i++) {
            if(!b[i]) {
                dfs
                break;
            }
        }
    }
    for(int i=1;i<=100;i++) {

    }
}
int main() {
    int m, t;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &m);
        for(int j=0;j<m;j++) {
            scanf("%d", &t);
            a[i][t]=1;
            a[t][i]=1;
        } a[i][i]=1;
    }
    for(int i=1;i<=100;i++) {
        if(a[1][i]) {
            cnt++;
            dfs(i, 1, 1);
            cnt--;
        }
    }
    for(int i=0;i<2;i++) {
        printf("%d\n", !i?(n-cnt):cnt);
        t=0;
        for(int j=1;j<=n;j++) {
            if(b[j]==i) {
                printf("%d%c", j, t+1==(!i?(n-cnt):cnt)?'\n':' ');
                t++;
            }
        }
    }
}