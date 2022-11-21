#include <stdio.h>
int main() {
    int sum=1, t, i, j, a[10]={0,};
    for(i=0;i<3;i++) {
        scanf("%d", &t);
        sum*=t;
    }
    for(;sum!=0;sum/=10) {
        a[sum%10]++;
    }
    for(i=0;i<10;i++) {
        printf("%d\n", a[i]);
    }
}