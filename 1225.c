#include <stdio.h>
char a[10001], b[10001];
int main() {
    long long int sum=0, i, j, it, jt;
    scanf("%s %s", a, b);
    for(i=0;a[i]!='\0';i++) {
        for(j=0;b[j]!='\0';j++) {
            it=a[i]-48;
            jt=b[j]-48;
            sum+=it*jt;
        }
    }
    printf("%lld", sum);
}