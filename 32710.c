#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=2;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            if(n==i||n==j||n==i*j) {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");
}