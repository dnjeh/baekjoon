#include <stdio.h>
int main() {
    int a[9][9]={{0, }, }, i, T, j, k, l, b[3][10]={{0, }, }, f;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        f=1;
        for(j=0;j<81;j++) scanf("%d", &a[j/9][j%9]);
        for(j=0;j<30;j++) b[j/10][j%10]=0;
        for(j=0;j<9&&f;j++) {
            for(k=0;k<20;k++) b[k/10][k%10]=0;
            for(k=0;k<9;k++) {
                b[0][a[j][k]]++;
                b[1][a[k][j]]++;
            }
            for(k=1;k<10;k++) if(b[0][k]!=1||b[1][k]!=1) {
                f=0;
                break;
            }
        }
        for(j=0;j<9&&f;j++) {
            for(k=0;k<10;k++) b[2][k]=0;
            for(k=(j/3)*3;k<(j/3+1)*3;k++) {
                for(l=(j%3)*3;l<(j%3+1)*3;l++) {
                    b[2][a[k][l]]++;
                }
            }
            for(k=1;k<10;k++) if(b[2][k]!=1) {
                f=0;
                break;
            }
        }
        printf("Case %d: %s\n", i+1, f?"CORRECT":"INCORRECT");
    }
}