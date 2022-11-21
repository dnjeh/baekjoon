#include <stdio.h>
int main() {
    int a[10], i, j, sum=10;
    for(i=0;i<10;i++) {
        scanf("%d", &a[i]);
        a[i]%=42;
    }
    for(i=1;i<10;i++) {
        for(j=0;j<i;j++) {
            if(a[i]==a[j]) {
                sum--;
                break;
            }
        }
    }
    printf("%d", sum);
}