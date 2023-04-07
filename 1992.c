#include <stdio.h>
int a[64][64];
void pp2(int siz, int I, int J);
void pp2Multi(int ssiz, int ii, int jj) {
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            pp2(ssiz, ii+ssiz*i, jj+ssiz*j);
        }
    }
}
void pp2(int siz, int I, int J) {
    int _t=-2, f=0;
    for(int i=0+I;i<I+siz;i++) {
        for(int j=0+J;j<J+siz;j++) {
            if(_t!=-2&&_t!=a[i][j]) {
                f=1;
                printf("(");
                pp2Multi(siz/2, I, J);
                printf(")");
                return;
            }
            _t=a[i][j];
        }
    }
    if(!f) printf("%d", _t);
}
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        getchar();
        for(j=0;j<n;j++) {
            scanf("%c", &a[i][j]);
            a[i][j]-=48;
        }
    }
    pp2(n, 0, 0);
}
