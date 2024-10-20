#include <stdio.h>
#include <math.h>
double a[2][200000], b[200000], c[200000];
double fun(int now, int now2) {
    int dx=a[0][now]-a[0][now2], dy=a[1][now]-a[1][now2], mux=!dy?2:(dy<0?1:3); 
    if(dy<0) dy*=-1;
    return sqrt(pow(dx, 2)+pow(dy, 2))*(double)mux;
} 
int main() {
    int n, q, t, tt;
    scanf("%d %d", &n, &q);
    for(int i=0;i<2;i++) {
        for(int j=0;j<n;j++) {
            scanf("%lf", &a[i][j]);
        }
    }
    for(int i=1;i<n;i++) {
        b[i]=b[i-1]+fun(i, i-1);
    }
    for(int i=n-2;i>=0;i--) {
        c[i]=c[i+1]+fun(i, i+1);
    }
    for(int i=0;i<q;i++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        if(t<tt) printf("%.16g\n", b[tt]-b[t]);
        else printf("%.16g\n", c[tt]-c[t]);
    }
}