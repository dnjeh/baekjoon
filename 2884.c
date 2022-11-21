#include <stdio.h>
int main() {
    int t, t1, sum=0;
    scanf("%d", &t);
    scanf("%d", &t1);
    sum=t*60+t1-45;
    if(sum<0) sum+=1440;
    printf("%01d %01d", sum/60, sum%60);
}