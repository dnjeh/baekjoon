#include <stdio.h>
int n, k, mem[101][100001], a[100][2];

int max(int a, int b) { return a>b?a:b; }
int dp() {
    int i, j;
    for(i=0;i<=n;i++) {
        for(j=0;j<=k;j++) {
            if(!i||!j) mem[i][j]=0;
            else if (a[i-1][0]<=j) {
                mem[i][j]=max(a[i-1][1]+mem[i-1][j-a[i-1][0]], mem[i-1][j]);
            } 
            else {
                mem[i][j]=mem[i-1][j];
            }
        }
    }
    return mem[n][k];
}

int main() {
    int i;
    scanf("%d %d", &n, &k);
    for (i=0;i<n;i++) {
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    printf("%d", dp());
}
