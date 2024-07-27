#include <stdio.h>
int main() {
    int n, a[2][3], t[3], cnt=0, f=0, tcnt, tt, ttt;
    scanf("%d", &n);
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &a[i][j]);
        }
    } 
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            for(int k=1;k<=n;k++) {
                t[0]=i; t[1]=j; t[2]=k; f=0;
                for(int ii=0;ii<2&&!f;ii++) {
                    tcnt=0;
                    for(int jj=0;jj<3&&!f;jj++) {
                        tt=(a[ii][jj]+n-2-1)%n+1; ttt=(a[ii][jj]+n+2-1)%n+1;
                        if(tt<ttt) {
                            if(tt<=t[jj]&&t[jj]<=ttt) tcnt++;
                        }
                        else if(tt<=t[jj]||t[jj]<=ttt) tcnt++;
                    }
                    if(tcnt==3) {
                        f=1;
                        cnt++;
                    }
                }
            }
        }
    }
    printf("%d", cnt);
}