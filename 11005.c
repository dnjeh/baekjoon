#include <stdio.h>
char toch(int t) {
    if(t<10) return t+48;
    else return (t-10)+65;
}
int main() {
    int n, b, i;
    char a[50];
    scanf("%d %d", &n, &b);
    for(i=0;n;i++) {
        a[i]=toch(n%b);
        n/=b;
    }
    for(i--;i>=0;i--) {
        printf("%c", a[i]);
    }
}