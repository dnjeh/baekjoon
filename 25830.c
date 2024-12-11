#include <stdio.h>
int main() {
    int a, b;
    scanf("%d:%d", &a, &b);
    int t=a*3600+b*60-a*60-b;
    printf("%02d:%02d:%02d", t/3600, t/60%60, t%60);
}
