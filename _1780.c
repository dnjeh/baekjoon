#include <stdio.h>
#include <windows.h>
int a[2187][2187], b[3];
void ppcut(int siz, int I, int J);
void ppcutMulti(int ssiz, int ii, int jj) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            ppcut(ssiz, ii+ssiz*i, jj+ssiz*j);
        }
    }
}
void ppcut(int siz, int I, int J) {
    int _t=-2, f=0;
    for(int i=0+I;i<I+siz;i++) {
        for(int j=0+J;j<J+siz;j++) {
            if(_t!=2&&_t!=a[i][j]) {
                printf("걸려들었다! i : %d, j : %d입니다.\n", i, j);
                f=1;
                ppcutMulti(siz/3, I, J);
            }
            _t=a[i][j];
        }
    }
    if(!f) b[_t+1]++;
}
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) {
        scanf("%d", &a[i][j]);
    }
    ppcut(n, 0, 0);
    for(i=0;i<3;i++) printf("%d\n", b[i]);
    Sleep(100000);
}