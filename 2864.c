#include <stdio.h>
#include <math.h>
int main() {
    int a, b, min=0, max=0, i, a1, b1;
    scanf("%d %d", &a, &b);
    for(i=0, a1=a;a1;a1/=10, i++) {
        if(a1%10==5||a1%10==6) {
            min+=5*(int)pow(10, i);
            max+=6*(int)pow(10, i);
        }
        else {
            min+=a1%10*(int)pow(10, i);
            max+=a1%10*(int)pow(10, i);
        }
    }
    for(i=0, b1=b;b1;b1/=10, i++) {
        if(b1%10==5||b1%10==6) {
            min+=5*(int)pow(10, i);
            max+=6*(int)pow(10, i);
        }
        else {
            min+=b1%10*(int)pow(10, i);
            max+=b1%10*(int)pow(10, i);
        }
    }
    printf("%d %d", min, max);
}