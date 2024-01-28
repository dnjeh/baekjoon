#include <stdio.h>
void bak(int *a, int m, int t, int tt) {
    static int b[8];
    if(t>=m) {
        for(int i=0;i<m;i++) {
            printf("%d%c", b[i], i+1<m?' ':'\n');
        }
    }
    else {
        for(int i=tt;i<=10000;i++) {
            if(a[i]) {
                a[i]=0;
                b[t]=i;
                bak(a, m, t+1, i+1);
                a[i]=1;
            }
        }
    }
}
int main() {
    int n, m, a[10001]={0, };
    scanf("%d %d", &n, &m);
    for(int i=0, t;i<n;i++) {
        scanf("%d", &t);
        a[t]=1;
    }
    bak(a, m, 0, 1);
}