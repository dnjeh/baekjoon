#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for(i=n;i>=4;i--) {
        for(j=i;j;j/=10) {
            if(j%10!=4&&j%10!=7) {
                break;
            }
            if(!(j/10)) {
                printf("%d", i);
                return 0;
            }
        }
    }
}