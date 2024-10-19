#include <stdio.h>
int a[50][50], mem[50][50], n, m;
int dp(int t, int tt) {
    int ret=0, _t;
    if(t>=0&&tt>=0&&t<n&&tt<m&&mem[t][tt]) ret=mem[t][tt];
    else if(t>=0&&tt>=0&&t<n&&tt<m&&a[t][tt]) {
        mem[t][tt]=-1;
        int dx[4]={-a[t][tt], a[t][tt], }, dy[4]={0, 0, -a[t][tt], a[t][tt]};
        for(int i=0;i<4;i++) {
            if((_t=dp(t+dy[i], tt+dx[i]))==-1) {
                ret=-1;
                break;
            }
            else if(_t+1>ret) ret=_t+1;
        }
        mem[t][tt]=ret;
    }
    return ret;
}
int main() {
    char t[55];
    int max=-1, _t;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf(" %s", t);
        for(int j=0;j<m;j++) {
            if(t[j]!='H') a[i][j]=t[j]-48;
        }
    }
    if((_t=dp(0, 0)+1)<0) {
        printf("-1");
        return 0;
    }
    else if(_t>max) {
        max=_t;
    }
    printf("%d", max-1);
}