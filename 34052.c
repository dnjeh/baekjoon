#include <stdio.h>
int main() {
    int t, sum=0;
    for(int i=0;i<4;i++) {
        scanf("%d", &t);
        sum+=t;
    }
    printf("%s", sum+300<=1800?"Yes":"No");
}