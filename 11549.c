#include <stdio.h>
int main() {
    int n, t, sum=0;
    scanf("%d", &n);
    for(int i=0;i<5;i++) {
        scanf("%d", &t);
        if(n==t) sum++;
    }
    printf("%d", sum);
}
