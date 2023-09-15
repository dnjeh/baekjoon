#include <stdio.h>
#define INF -1000000001

int a[2][100], mem[30000001];
int n, k;
int max(int a, int b) { return a>b?a:b; }
int dp() { //backsnap
    int i, j, maxx=INF;
    for(i=0;i<=n;i++) {
        for(j=30000000;j-a[0][i]>=0;j--) {
            mem[j]=max(mem[j], mem[j-a[0][i]]+a[1][i]);
            if(j>=k&&maxx<mem[j]) maxx=mem[j];
        }
    }
    return maxx;
}
void set();
int main() {
    int i, j, t;
    scanf("%d %d", &n, &k);
    set();
    for(i=0;i<n;i++) {
        scanf("%d", &a[0][i]);
    }
    for(i=0;i<n;i++) {
        scanf("%d", &a[1][i]);
        a[1][i]=-a[1][i];
    }
    printf("%d", -dp());
}
void set() {
    for(int i=2;i<=30000000;i++) mem[i]=INF;
}