#include <stdio.h>
#include <math.h>
int main() {
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=1;i<=500;i++) {
        for(int j=1;j<=i;j++) {
            if(i*i==j*j+n) cnt++;
        }
    }
    printf("%d", cnt);
}