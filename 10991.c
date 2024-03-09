#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n+i;j++) {
            if((j>=n-i-1)&&((!(n%2)&&i%2!=j%2)||(n%2&&i%2==j%2))) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}