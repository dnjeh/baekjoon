#include <stdio.h>
int n, m, a[9], b[8];
void bak(int t) {
    int i;
    if(t>=m) {
        for(i=0;i<m;i++) {
            printf("%d%c", b[i], i+1<m?' ':'\n');
        }
    }
    else {
        for(i=1;i<=n;i++) {
            if(!a[i]) {
                a[i]=1;
                b[t]=i;
                bak(t+1);
                a[i]=0;
            }
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    bak(0);
}