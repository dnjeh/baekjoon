#include <stdio.h>
int a[100][100];
int main() {
    int n, i, t, tt, cnt=0, j, jj;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        for(j=t;j<10+t;j++) {
            for(jj=tt;jj<10+tt;jj++) {
                if(!a[j][jj]) {
                    cnt++;
                    a[j][jj]=1;
                }
            }
        }
    }
    printf("%d", cnt);
}