#include <stdio.h>
int main() {
    int a[10]={0, }, n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]=1;
    }
    for(int i=0;i<10;i++) {
        if(a[i]) printf("%d\n", i);
    }
}