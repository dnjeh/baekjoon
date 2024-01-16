#include <stdio.h>
#define INF 2147483647
int mem[3][500][500], a[2][500];
int dp(int t, int tt) {
    int min=INF, _t, i;
    if(!mem[0][t][tt]) {
        for(i=t;i<tt;i++) {
            if(min>(_t=dp(t, i)+dp(i+1, tt)+(mem[1][t][i]*mem[2][t][i]*mem[2][i+1][tt]))) {
                mem[0][t][tt]=min=_t;
                mem[1][t][tt]=mem[1][t][i];
                mem[2][t][tt]=mem[2][i+1][tt];
            }
        }
    }
    return mem[0][t][tt];
}
void set(int n);
int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &a[0][i], &a[1][i]);
    }
    set(n);
    printf("%d", dp(0, n-1));
}
void set(int n) {
    int i;
    for(i=0;i<n;i++) {
        mem[0][i][i]=0;
        mem[1][i][i]=a[0][i];
        mem[2][i][i]=a[1][i];
    }
}