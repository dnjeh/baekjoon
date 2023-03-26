#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int b_1 = b % 10;
    int b_2 = (b / 10) % 10;
    int b_3 = b / 100;

    printf("%d\n", a*b_1);
    printf("%d\n", a*b_2);
    printf("%d\n", a*b_3);

    int sum = a*b_1 + (a*b_2 * 10) + (a*b_3 * 100);
    
    printf("%d", sum);
}