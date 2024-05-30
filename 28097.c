#include <stdio.h>
int main() {
    int n, sum=0, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        sum+=t+(i+1==n?0:8);
    }
    printf("%d %d", sum/24, sum%24);
}