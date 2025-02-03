#include <stdio.h>
int a[8400000][2], cnt=0, con, ind;
int c[5000000];
void swp(int *t, int *tt) {
    int _t=*t;
    *t=*tt;
    *tt=_t;
}
void iheaput(int n, int nn) {
    int _i, _t, f;
    a[++cnt][0]=n;
    a[cnt][1]=nn;
    f=cnt;
    for(_i=cnt/2;_i>=1;_i/=2) {
        if(a[f][0]<a[_i][0]) {
            swp(&a[_i][0], &a[f][0]);
            swp(&a[_i][1], &a[f][1]);
        }
        else break;
        f=_i;        
    }
}
void oheaput() {
    int _i, _t;
    if(!cnt) ind=-1;
    else {
        a[1][0]=a[cnt][0];
        a[1][1]=a[cnt][1];
        a[cnt][0]=0;
        a[cnt--][1]=0;
        for(_i=2;_i<=cnt;_i*=2) {
            if(a[_i/2][0]>a[_i][0]||(a[_i/2][0]>a[_i+1][0]&&(_i+1<=cnt))) {
                if(a[_i][0]<a[_i+1][0]||_i+1>cnt) {
                    swp(&a[_i/2][0], &a[_i][0]);
                    swp(&a[_i/2][1], &a[_i][1]);
                }
                else {
                    swp(&a[_i/2][0], &a[_i+1][0]);
                    swp(&a[_i/2][1], &a[_i+1][1]);
                    _i++;
                }
            }
            else break;
        }
    }
}

int main() {
    int n, l;
    scanf("%d %d", &n, &l);
    for(int i=0;i<n;i++) {
        scanf("%d", &c[i]);
    }
    for(int i=0;i<n;i++) {
        iheaput(c[i], i);
        for(;a[1][1]>i||a[1][1]<=i-l;) {
            oheaput();
        }
        printf("%d ", a[1][0]);
    }
} 