#include <stdio.h>
int gcd(int a, int b) {
    int t;
    if(a<b) { t=a;a=b;b=t;}
    while(b!=0) {
        t=b;
        b=a%b;
        a=t;
    }
    return a;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a*=d; c*=b;
    b*=d; a+=c;
    printf("%d %d", a/gcd(a, b), b/gcd(a, b));
}