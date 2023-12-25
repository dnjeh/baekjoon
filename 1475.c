#include <stdio.h>
int mfmax(int a, int b) { return a>b?a:b; }
int main() {
    int n, a[10]={0, }, max=0, i;
    scanf("%d", &n);
    for(;n;n/=10) {
        a[n%10]++;
    }
    for(i=0;i<10;i++) {
        if(i!=6&&i!=9&&max<a[i]) {
            max=a[i];
        }
    }
    printf("%d", mfmax(max, (a[6]+a[9])/2+(a[6]+a[9])%2));
}