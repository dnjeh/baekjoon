#include <stdio.h>
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t%2) printf("%d is odd\n", t);
        else printf("%d is even\n", t);
    }
}