#include <stdio.h>
int n, a[100000];
int main() {
    long long int sum=0;
    int i, t, min;
    scanf("%d", &n);
    for(i=0;i<n-1;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||t<min) min=t;
        if(i+1<n) sum+=(long long int)min*(long long int)a[i];
    }
    printf("%lld", sum);
}