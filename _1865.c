#include <stdio.h>
#define INF 2000000000
long long int d[500], p[3000], vis[500];
int n, m, w, pind;
void pput(long long int a, long long int b, long long int c) {
    p[pind++]=a*100000000+b*100000+c;
}
int bf() {
    long long int i, k, sta, end, cst;
    for(k=0;k<n-1;k++) {
        for(i=0;i<pind;i++) {
            sta=p[i]/100000000; end=p[i]%100000000/100000; cst=p[i]%100000;
            if(p[i]<0) {
                sta*=-1;
                end*=-1;
            }
            //printf("chk!, %lld %lld %lld\n", sta, end, cst);
            if(vis[sta]&&d[end]>d[sta]+cst) {
                //printf("ping!, %lld %lld %lld\n", sta, end, cst);
                d[end]=d[sta]+cst;
                vis[end]=1;
            }  
        }
    }
    for(i=0;i<pind;i++) {
        sta=p[i]/100000000; end=p[i]%100000000/100000; cst=p[i]%100000;
        if(vis[sta]&&d[end]>d[sta]+cst) {
            return 1;
        }  
    }
    return 0;
}
void set();
int main() {
    int i, j, T;
    long long int t, tt, ttt;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d %d", &n, &m, &w);
        set();
        for(j=0;j<m;j++) {
            scanf("%lld %lld %lld", &t, &tt, &ttt);
            t--; tt--;
            pput(t, tt, ttt);
            pput(tt, t, ttt);
        }
        for(j=0;j<w;j++) {
            scanf("%lld %lld %lld", &t, &tt, &ttt);
            t--; tt--;
            pput(-t, -tt, -ttt);
        }
        if(bf()) printf("YES\n");
        else printf("NO\n");
    }
}
void set() {
    int i, j; pind=0;
    for(i=0;i<m+w;i++) {
        p[i]=INF;
    }
    for(i=0;i<n;i++) {
        d[i]=INF;
    }
    d[0]=0;
    vis[0]=1;
}
