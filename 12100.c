#include <stdio.h>
int a[20][20], b[20][20], c[5], max=0, n;

void printa() {
    int i, j;
    printf("--------");
    for(i=0;i<5;i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

void move(int t, int tt, int ttt) {
    int i, *ii, *jj;
    if(t<2) {
        ii=&ttt;
        jj=&i;
    }
    else {
        ii=&i;
        jj=&ttt;
    }
    for(i=(t%2?n-1:0);t%2?(i>=0):(i<n);t%2?(i--):(i++)) {
        if(!b[*ii][*jj]) {
            b[*ii][*jj]=tt;
            return;
        }
    }
}

void mve(int t) {
    int i, j, *ii, *jj, tt;
    if(t<2) {
        ii=&i;
        jj=&j;
    }
    else {
        ii=&j;
        jj=&i;
    }
    for(i=(t%2?n-1:0);t%2?(i>=0):(i<n);t%2?(i--):(i++)) {
        for(j=(t%2?n-1:0);t%2?(j>=0):(j<n);t%2?(j--):(j++)) {
            if(b[*ii][*jj]) {
                tt=b[*ii][*jj];
                b[*ii][*jj]=0;
                move(t, tt, i);
            }
        }
    }
}

void mge(int t) {
    int i, j, *ii, *jj, tt;
    if(t<2) {
        ii=&i;
        jj=&j;
    }
    else {
        ii=&j;
        jj=&i;
    }
    for(i=(t%2?n-1:0);t%2?(i>=0):(i<n);t%2?(i--):(i++)) {
        for(j=(t%2?n-1:0);t%2?(j>=0):(j<n);t%2?(j--):(j++)) {
            if(b[*ii][*jj]) {
                tt=b[*ii][*jj];
                if(t%2) j--;
                else j++;
                if(j>=0&&j<n&&tt==b[*ii][*jj]) {
                    b[*ii][*jj]=0;
                    if(t%2) j++;
                    else j--;
                    b[*ii][*jj]*=2;
                    if(max<b[*ii][*jj]) max=b[*ii][*jj];
                }
                else {
                    if(t%2) j++;
                    else j--;
                }
            }
        }
    }
}

void fun() {
    int i, j;
    for(i=0;i<n;i++) for(j=0;j<n;j++) {
        b[i][j]=a[i][j];
    }
    for(i=0;i<5;i++) {
        mve(c[i]);
        mge(c[i]);
        mve(c[i]);
        //printa();
    }
}

void bac(int t) {
    int i;
    if(t>=5) fun();
    else for(i=0;i<4;i++) {
        c[t]=i;
        bac(t+1);
    }
}
int main() {
    int i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            if(max<a[i][j]) max=a[i][j];
        }
    }
    bac(0);
    printf("%d", max);
}
