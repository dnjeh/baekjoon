#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;;i++) {
        if(n==1) {
            printf("%d", i);
            break;
        }
        if(n%2) n=n*3+1;
        else n/=2;
    }
}