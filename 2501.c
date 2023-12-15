#include <stdio.h>
int main() {
    int i, a, b, cnt=0;
    scanf("%d %d", &a, &b);
    for(i=1;i<=a;i++) {
        if(!(a%i)) {
            cnt++;
            if(cnt==b) {
                printf("%d", i);
                return 0;
            }
        }
    } 
    printf("0");
}