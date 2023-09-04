#include <stdio.h>
#define INF 2147483647
int T, n, m, w, a[500][500], d[500];
void aput(int t, int tt, int ttt) {
    if(a[t][tt]>ttt) a[t][tt]=ttt;
}
int bf() {
    int i, j;
    d[0]=0;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n;j++) {
            if(a[0][j]!=INF&&d[0]+a[0][j]<d[j]) {
                d[j]=d[0]+a[0][j];
            }
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]!=INF&&d[i]!=INF&&d[i]+a[i][j]<d[j]) {
                return 1; 
            }
        }
    }
    return 0; 
}
void set();
int main() {
    int k, i, j, t, tt, ttt;
    scanf("%d", &T);
    for(k=0;k<T;k++) {
        scanf("%d %d %d", &n, &m, &w);
        set();
        for(i=0;i<m;i++) {
            scanf("%d %d %d", &t, &tt, &ttt);
            t--; tt--;
            aput(t, tt, ttt); 
            aput(tt, t, ttt); 
        }
        for(i=0;i<w;i++) {
            scanf("%d %d %d", &t, &tt, &ttt);
            t--; tt--;
            aput(t, tt, -ttt); 
        }
        if(bf()) printf("YES\n");
        else printf("NO\n");
    }
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        d[i]=INF;
        for(j=0;j<n;j++) a[i][j]=INF;
    }
}
