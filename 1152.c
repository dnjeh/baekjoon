#include <stdio.h>
int main() {
    int sum=0;
    char a[1000001];
    for(;scanf("%s", a)!=EOF;) {
        sum++;
    }
    printf("%d", sum);
}