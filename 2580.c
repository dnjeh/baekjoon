#include <stdio.h>
#include <stdlib.h>
int a[9][9], b[3][9][10], cnt, max=0;
void printa() {
    int i, j;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void ptt(int y, int x, int c, int f) {
    b[0][y][c]=f;
    b[1][x][c]=f;
    b[2][(y/3)*3+x/3][c]=f;
}
int chk(int y, int x, int c) {
    if(!b[0][y][c]&&!b[1][x][c]&&!b[2][y/3*3+x/3][c]) return 1;
    else return 0;
}
void bac(int y, int x) {
    int i, j, k, f=0;
    if(cnt>=81) {
        printa();
        exit(0);
    }
    else {
        for(i=y;i<9;i++) {
            for(j=(y==i?x:0);j<9;j++) {
                if(!a[i][j]) {
                    f=1;
                    for(k=1;k<=9;k++) {
                        if(chk(i, j, k)) {
                            a[i][j]=k;
                            ptt(i, j, k, 1);
                            cnt++;
                            bac(i+(j+1)/9, (j+1)%9);
                            cnt--;
                            ptt(i, j, k, 0);
                            a[i][j]=0;
                        }
                    }
                }
                if(f) return;
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
                ptt(i, j, a[i][j], 1);
                cnt++;
            }
        }
    }
    bac(0, 0);
}