#include <stdio.h>
int main() {
    int a[5]={0, }, x, y, r;
    for(int i=1;i<=4;i++) scanf("%d", &a[i]);
    scanf("%d %d %d", &x, &y, &r);
    for(int i=1;i<=4;i++) {
        if(a[i]==x) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}