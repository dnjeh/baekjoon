#include <stdio.h>
int main() {
    int a[2][100];
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        int n, t;
        char ct;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            scanf(" %c %d", &ct, &a[1][j]);
            if(ct=='O') a[0][j]=1;
            else a[0][j]=0;
        }
        int ans=0, onow=1, bnow=1, oi=0, bi=0;
        for(int j=0;j<n;ans++) {
            int f=0;
            for(;!a[0][oi];oi++) { }
            if(a[1][oi]>onow) onow++;
            else if(a[1][oi]<onow) onow--;
            else if(a[0][j]&&onow==a[1][j]) {
                oi++;
                j++;
                f=1;
            }
            for(;a[0][bi];bi++) { }
            if(a[1][bi]>bnow) bnow++;
            else if(a[1][bi]<bnow) bnow--;
            else if(!f&&!a[0][j]&&bnow==a[1][j]) {
                bi++;
                j++;
            }
        }
        printf("Case #%d: %d\n", i+1, ans);
    }
}