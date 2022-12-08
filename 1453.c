#include <stdio.h>
int main() {
    int a[101]={0}, t, i, T, sum=0;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d", &t);
        if(a[t]) {
            sum++; 
        }
        else {
            a[t]++;
        }
    }
    printf("%d", sum);
}