#include <stdio.h>
int main() {
    int t, max[2]={0}, i;
    for(i=1;i<=9;i++) {
        scanf("%d", &t);
        if(t>max[0]) {
            max[0]=t;
            max[1]=i;
        }
    }
    printf("%d %d", max[0], max[1]);
}