#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>=b) printf("Congratulations, you are within the speed limit!");
    else {
        b-=a;
        printf("You are speeding and your fine is $%d.", b<=20?100:(b<=30?270:500));
    }
}