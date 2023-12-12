#include <stdio.h>
int main() {
    int n, ii, i, j;
    scanf("%d", &n);
    for(i=0;i<n*2-1;i++) {
        if(i>=n) ii=n-i+n-2;
        else ii=i;;
        for(j=0;j<n;j++) {
            printf("%c", j<=ii?'*':' ');
        }
        for(j=n-1;j>=0;j--) {
            printf("%c", j<=ii?'*':' ');
        }
        printf("\n");
    }
}