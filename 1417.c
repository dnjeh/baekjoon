#include <stdio.h>
int main() {
    int max=0, T, i, sum=0;
    scanf("%d", &T);
    int a[T];
    if(T==1) {
        printf("0");
        return 0;
    }
    for(i=0;i<T;i++) {
        scanf("%d", &a[i]);
        if(a[i]>max) max=a[i];
    }
    for(i=0;a[0]<=max;i++) {
        if(a[i%(T-1)+1]==max) {
            a[i%(T-1)+1]--;
            a[0]++;
            sum++;
        }
        if(i%(T-1)+1==T-1) max--;
    }
    printf("%d", sum);
}