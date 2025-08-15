#include <stdio.h>
int main() {
    int n;
    char t[110];
    scanf("%d %s", &n, t);
    if(t[n-1]=='G') {
        t[n-1]=0;
        printf("%s", t);
    }
    else {
        printf("%sG", t);
    }
}