#include <stdio.h>
#include <stdbool.h>
bool a[2000001];
int main() {
    int i, j, n, c, t, sum=0;
    scanf("%d %d", &n, &c);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        for(j=1;j*t<=c;j++) {
            a[j*t]=true;
        }
    }
    for(i=1;i<=c;i++) {
        if(a[i]) sum++;
    }
    printf("%d", sum);
}