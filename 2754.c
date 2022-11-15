#include <stdio.h>
int main() {
    int sum=0;
    char a[3];
    scanf("%s", a);
    switch (a[0]){
        case 'A':
            sum+=40;
            break;
        case 'B':
            sum+=30;
            break;
        case 'C':
            sum+=20;
            break;
        default:
            sum+=10;
            break;
    }
    switch (a[1]) {
        case '+':
            sum+=3;
            break;
        case '0':
            break;
        case '\0':
            sum=0;
            break;
        default:
            sum-=3;
            break;
    }
    printf("%d.%d", sum/10, sum%10);
}