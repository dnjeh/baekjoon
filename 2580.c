#include <stdio.h>
#include <stdlib.h>
int a[9][9], b[3][9][10], cnt;
void printa() {
    int i, j;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++) {
            printa("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void ptt(int y, int x, int c, int f) {
    b[0][y][c]=f;
    b[0][x][c]=f;
    
}
void bac(int y, int x) {
    int i, j, k;
    if(cnt>=81) {
        printa();
        exit(0);
    }
    else {
        for(i=y;i<9;i++) {
            for(j=x;j<9;j++) {
                for(k=1;k<=9;k++) {
                    if(chk(i, j, k)) {
                        a[i][j]=k;
                        ptt();
                    }
                }
            }
        }
    }
}
int main() {
    int i,j;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]) {
                b[0][i][a[i][j]]=1;
                b[1][j][a[i][j]]=1;
                b[2][i/3*3+j/3][a[i][j]]=1;
                cnt++;
            }
        }
    }
    bac(0, 0);
}