#include <stdio.h>
int main() {
    int a[2][2]={{2, 1}, {7, 2}};
    int n, i;
    scanf("%d", &n);
    if(n==1) {
        printf("%d", 1);
        return 0;
    }
    for(i=2;;i++) {
        if((a[0][0]<=n&&n<=a[1][0])||n<a[0][0]) {
            printf("%d", i);
            return 0;
        }
        a[0][0]+=(a[0][1]++)*6;
        a[1][0]+=(a[1][1]++)*6;
    }
}