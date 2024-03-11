#include <stdio.h>
int n, m, a[200001];
int main() {
    int i, j, k, t, mea=0, cnt=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &k);
        for(j=0;j<k;j++) {
            scanf("%d", &t);
            if(!j) a[t]++;
            if(j+1==k) a[t]++;
        }
    }
    for(i=1;i<=m;i++) {
        if(a[i]) {
            a[i]--;
            cnt++;
            if(n==cnt||n+1==cnt) mea+=i;
            if(a[i]) i--;
        }
    }
    mea=(int)(mea/2.0);
    printf("%d", mea);
}