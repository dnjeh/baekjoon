#include <stdio.h>

int a[2][100], mem[10001];
int n, k;
int max(int a, int b) { return a>b?a:b; }
int dp() { //one-hot-backsnap
    int i, j;
    for(i=0;i<=n;i++) {
        for(j=10000;j-a[0][i]>=0;j--) {
            mem[j]=max(mem[j], mem[j-a[0][i]]+a[1][i]);
        }
    }
    for(i=0;i<10000;i++) {
        if(mem[i]>=k) return i; 
    }
}
int main() {
    int i, j, t;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++) {
        scanf("%d", &a[1][i]);
    }
    for(i=0;i<n;i++) {
        scanf("%d", &a[0][i]);
    }
    printf("%d", dp());
}