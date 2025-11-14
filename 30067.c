#include <stdio.h>
int main() {
    int a[10], sum=0;
    for(int i=0;i<10;i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    for(int i=0;i<10;i++) {
        if(sum-a[i]==a[i]) {
            printf("%d", a[i]);
            return 0;
        }
    }
}