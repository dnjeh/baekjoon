#include <stdio.h>
#include <stdlib.h>
int a[9][9], b[3][9][10], cnt, max=0, exe=0, mf;
void printa() {
    int i, j;
    for(i=0;i<9;i++) {
        for(j=0;j<9;j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
void ptt(int y, int x, int c, int f) {
    if(f&&b[0][y][c]) mf=1;
    b[0][y][c]=f;
    if(f&&b[1][x][c]) mf=1;
    b[1][x][c]=f;
    if(f&&b[2][(y/3)*3+x/3][c]) mf=1;
    b[2][(y/3)*3+x/3][c]=f;
}
int chk(int y, int x, int c) {
    if(!b[0][y][c]&&!b[1][x][c]&&!b[2][y/3*3+x/3][c]) return 1;
    else return 0;
}
void bac(int y, int x) {
    int i, j, k, f=0;
    if(exe) return;
    if(cnt>=81&&!exe) {
        printa();
        exe=1;
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
void set();
int main() {
    int i,j,k,T;
    scanf("%d", &T);
    for(k=0;k<T;k++) {
        set();
        for(i=0;i<9;i++) {
            for(j=0;j<9;j++) {
                scanf("%01d", &a[i][j]);
                if(a[i][j]) {
                    ptt(i, j, a[i][j], 1);
                    cnt++;
                }
            }
        }
        if(!mf) bac(0, 0);
        if(mf||!exe) printf("Could not complete this grid.\n");
        if(k+1<T) printf("\n");
    }
}
void set() {
    int i, j, k;
    exe=cnt=mf=0;
    for(i=0;i<9;i++) for(j=0;j<9;j++) for(k=1;k<10;k++) {
        ptt(i,j,k,0);
    }
}
