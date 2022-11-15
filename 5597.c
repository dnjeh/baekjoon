#include <stdio.h>
int main() {
    int a[30]={0}, t, i;
    for(i=0;i<28;i++) {
        scanf("%d", &t);
        a[t-1]=1;
    }
    for(i=0;i<30;i++) {
        if(!a[i]) printf("%d\n", i+1);
    }
}