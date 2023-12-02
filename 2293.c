#include <stdio.h>
int a[100], mem[10001]={1,};
int n, k;
void dp(int t) {
    int i;
    for(i=t;i<=k;i++) {
        mem[i]+=mem[i-t];
    }
    return;
}
void set();
int main() {
    int i;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++) {
        dp(a[i]);
    }
    printf("%d", mem[k]);
}