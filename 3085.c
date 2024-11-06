#include <stdio.h>
void fun(int now, int* nowc, char* nowh, char t) {
    if(nowh[now]==t) nowc[now]++;
    else nowc[now]=1;
    nowh[now]=t;
    //printf("%d %d %c %c\n", now, nowc[now], nowh[now], t);
}
void printa(char a[][51], int n) {
    printf("\n-----------\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
    printf("\n-----------\n");
}
int chk(char a[][51], int n) {
    //printa(a, n);
    int ret=0;
    int ty[50]={0, }, tx[50]={0, };
    char tty[50]={0, }, ttx[50]={0, };
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            fun(i, ty, tty, a[i][j]); fun(j, tx, ttx, a[i][j]);
            if(ret<ty[i]) ret=ty[i];
            if(ret<tx[j]) ret=tx[j];
        }
    }
    return ret;
}

void myswap(char *a, char *b) {
    char t=*a;
    *a=*b;
    *b=t;
}

int main() {
    int n, it, max=0;
    char a[51][51], t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s", a[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(j+1<n) {
                myswap(&a[i][j], &a[i][j+1]);
                if(max<(it=chk(a, n))) max=it;
                myswap(&a[i][j], &a[i][j+1]);
            }
            if(i+1<n) {
                myswap(&a[i][j], &a[i+1][j]);
                if(max<(it=chk(a, n))) max=it;
                myswap(&a[i][j], &a[i+1][j]);
            }
        }
    }
    printf("%d", max);
    return 0;
}
