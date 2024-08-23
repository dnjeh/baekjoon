#include <stdio.h>
long long int a[250000], mem[250000];
int main() {
    long long int max;
    int n;
    for(scanf("%d", &n);n;scanf("%d", &n)) {
        max=-2500000003;
        for(int i=0;i<n;i++) {
            scanf("%lld", &a[i]);
            if(!i||a[i]>a[i]+mem[i-1]) mem[i]=a[i];
            else mem[i]=a[i]+mem[i-1];
            if(max<mem[i]) max=mem[i];
        }
        printf("%lld\n", max);
    }
}
