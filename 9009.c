#include <stdio.h>
int a[50], b[50], n;
void fibo() {
    int i;
    a[0]=0;
    a[1]=1;
    for(i=2;a[i-1]<1000000000;i++) {
        a[i]=a[i-1]+a[i-2];
    }
}
void reset() {
    for(int i=0;i<50;i++) b[i]=0;
}
int main() {
    int T, i, j;
    fibo();
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        reset();
        scanf("%d", &n);
        for(j=49;j>=0&&n;j--) {
            if(a[j]<=n) {
                n-=a[j];
                b[j]=a[j];
            }
        }
        for(j=0;j<50;j++) {
            if(b[j]) printf("%d ", b[j]);
        }
        printf("\n");
    }
}