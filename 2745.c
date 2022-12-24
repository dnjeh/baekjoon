#include <stdio.h>
#include <math.h>
int main() {
    int i, j, b, sum=0;
    char a[35];
    scanf("%s", a);
    scanf("%d", &b);
    for(i=0;a[i]!='\0';i++) {
        if(a[i]>='A') {
            a[i]-=55;
        }
        else {
            a[i]-=48;
        }
    }
    i--;
    for(j=0;i>=0;j++, i--) {
        sum+=a[i]*(int)pow(b, j);
    }
    printf("%d", sum);
}  