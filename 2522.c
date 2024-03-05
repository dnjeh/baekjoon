#include <stdio.h>

int abs(int t) {
    return t<0?-t:t;
}
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<n*2;i++) {
        int t=abs(n-i);
        int j;
        for(j=0;j<t;j++) printf(" ");
        for(;j<n;j++) printf("*");
        printf("\n");
    }
}
