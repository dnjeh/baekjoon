#include <stdio.h>
int main() {
    int a[10]={0, }, i, t;
    for(i=0;i<5;i++)  {
        scanf("%d", &t);
        a[t]++;
    }
    for(i=0;i<10;i++) {
        if(a[i]%2) {
            printf("%d", i);
            return 0;
        }
    }
}