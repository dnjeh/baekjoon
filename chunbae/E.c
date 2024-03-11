#include <stdio.h>
int n, a[4], asdf[6][2]={{0, 3}, {1, 2}, {0, 2}, {1, 3}, {0, 1}, {2, 3}};
int main() {
    int i, t, ans=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for(i=0;i<6;i++) {
        t=a[asdf[i][0]]<a[asdf[i][1]]?a[asdf[i][0]]:a[asdf[i][1]];
        ans+=t*(asdf[i][0]^asdf[i][1]);
        a[asdf[i][0]]-=t; a[asdf[i][1]]-=t;
    }
    printf("%d", ans);
}