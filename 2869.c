#include <stdio.h>
int main() {
    int a, b, n, ab, t=0;
    scanf("%d %d %d", &a, &b, &n);
    ab=a-b;
    if(ab==1) {
        t=n/ab-a+1;
    }
    else if(!(n%ab)) {
        t=n/ab;
    }
    else {
        t=n/ab+1;
    }
    printf("%d", t);
}