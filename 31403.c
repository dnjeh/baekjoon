#include <stdio.h>
#include <math.h>

int len(int t) {
    int i;
    for(i=0;t;t/=10, i++) {}
    return i;
}

int sum(int a, int b) {
    return a*(int)pow(10, len(b))+b;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%d", a+b-c, sum(a, b)-c);
    return 0;
}
