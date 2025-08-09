#include <stdio.h>
int main() {
    int a[30];
    int n, d, sum=0;
    scanf("%d %d", &n, &d);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    for(int i=0;i<n;i++) {
        printf("%d\n",  d*a[i]/sum);
    }
}