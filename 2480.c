#include <stdio.h>
int main() {
    int a[3]={0}, i, sum=0;
    for(i=0;i<3;i++)
        scanf("%d", &a[i]);
    if(a[0]==a[1]&&a[1]==a[2]) {
        sum+=10000+a[0]*1000;
    }
    else if(a[0]!=a[1]&&a[1]!=a[2]&&a[0]!=a[2]) {
        sum+=(a[0]>a[1]?(a[0]>a[2]?a[0]:a[2]):(a[1]>a[2]?a[1]:a[2]))*100;
    }
    else {
        sum+=1000+(a[0]==a[1]||a[0]==a[2]?a[0]:a[1])*100;
    }
    printf("%d", sum);
}