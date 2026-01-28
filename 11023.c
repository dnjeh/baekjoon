#include <stdio.h>
int main() {
    int t, sum=0;
    for(;scanf("%d", &t)!=EOF;) {
        sum+=t;
    }
    printf("%d", sum);
}