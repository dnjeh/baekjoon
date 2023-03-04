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
    int n, i, t;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    for(i=1;i<n;i++) {
        t=gcd(a[0], a[i]);
        printf("%d/%d\n", a[0]/t, a[i]/t);
    }
}