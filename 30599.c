#include <stdio.h>
int sum(int t) {
    int sum=0;
    for(;t;t/=10) sum+=t%10;
    return sum;
}
int main() {
    int a, b, c;
    scanf("%d", &a);
    b=sum(a);
    for(c=a;a%b!=sum(c)%b;c+=a) {}
    for(int i=0;i<a/b-sum(c)/b;i++) {
        printf("%d", a);
    }
    printf("%d", c);
}