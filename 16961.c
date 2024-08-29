#include <stdio.h>
int a[2][367];
int main() {
    char t;
    int n, tt, ttt, ans[5]={0, };
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %c %d %d", &t, &tt, &ttt);
        if(ans[4]<ttt-tt+1) ans[4]=ttt-tt+1;
        for(int j=tt;j<=ttt;j++) {
            a[t=='T'][j]++;
        }
    }
    for(int i=1;i<=366;i++) {
        if(a[0][i]||a[1][i]) ans[0]++;
        if(ans[1]<a[0][i]+a[1][i]) ans[1]=a[0][i]+a[1][i];
        if(a[0][i]&&a[0][i]==a[1][i]) {
            ans[2]++;
            if(ans[3]<a[0][i]*2) ans[3]=a[0][i]*2;
        }
    }
    for(int i=0;i<5;i++) {
        printf("%d\n", ans[i]);
    }
}