#include <stdio.h>
int fun(int t, int n) {
    if(!(t/n)||t/n==4) return 1;
    else return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n*5;i++) {
        for(int j=0;j<n*5;j++) {
            printf("%c", fun(i, n)||fun(j, n)?'@':' ');
        }
        printf("\n");
    }
}