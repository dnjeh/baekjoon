#include <stdio.h>
int a[128][128], b[2];
void ppcut(int siz, int I, int J);
void ppcutMulti(int ssiz, int ii, int jj) {
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            ppcut(ssiz, ii+ssiz*i, jj+ssiz*j);
        }
    }
}
void ppcut(int siz, int I, int J) {
    int _t=-1, f=0;
    for(int i=0+I;i<I+siz;i++) {
        for(int j=0+J;j<J+siz;j++) {
            if(_t>=0&&_t!=a[i][j]) {
                f=1;
                ppcutMulti(siz/2, I, J);
                return;
            }
            _t=a[i][j];
        }
    }
    if(!f) b[_t]++;
}
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) {
        scanf("%d", &a[i][j]);
    }
    ppcut(n, 0, 0);
    for(i=0;i<2;i++) printf("%d\n", b[i]);
}