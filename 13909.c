#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=3;;i+=2) {
        n-=i;
        if(n<=0) {
            printf("%d", (i-1)/2);
            return 0;
        }
    }
    return 0;
}
