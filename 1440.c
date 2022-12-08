#include <stdio.h>
int main() {
    int a[3], i, sum=0;
    scanf("%d:%d:%d", &a[0], &a[1], &a[2]);
    for(i=0;i<3;i++) {
        if(a[i]>=1&&a[i]<=12) {
            sum+=10;
        }
        else if(a[i]>=0&&a[i]<=59) {
            sum+=1;
        }
    }
    switch(sum) {
        case 12:
            printf("2");
            break;
        case 21:
            printf("4");
            break;
        case 30:
            printf("6");
            break;
        default:
            printf("0");
            break;
    }
}