#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(!(a%400)||(!(a%4)&&a%100)) {
        printf("1");
    }
    else {
        printf("0");
    }
}