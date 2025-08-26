#include <stdio.h>

int main() {
    int a, b, t;
    scanf("%d %d", &a, &b);
    if(a>b) {
        t=a;
        a=b;
        b=t;
    }
    for(int i=0;i<b-a;i++) {
        printf("1");
    }
    for(int i=0;i<a;i++) {
        printf("2");
    }
    return 0;
}
