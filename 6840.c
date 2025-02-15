#include <stdio.h>
int main() {
    int a[3], max, min, sum=0;
    for(int i=0;i<3;i++) {
        scanf("%d", &a[i]);
        if(!i||a[i]>max) max=a[i];
        if(!i||a[i]<min) min=a[i];
        sum+=a[i];
    }
    printf("%d", sum-max-min);
}