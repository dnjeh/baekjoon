#include <stdio.h>

int main() {
    int a, b, ans=0;
    scanf("%d", &a);
    b=a; a=~a; a++;
    for(int i=0;i<32;i++) {
        int t=1<<i;
        if((b&t)!=(a&t)) ans++;
    }
    printf("%d", ans);
    return 0;
}
