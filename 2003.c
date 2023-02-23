#include <stdio.h>
int main() {
    int n, m, i, j1, j2, cnt=0;
    scanf("%d %d", &n, &m);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(i) a[i]+=a[i-1];
    }
    for(i=0;i<n;i++) {
        for(j1=-1, j2=i;j2<n;j1++, j2++) {
            if(j1<0&&a[j2]==m) cnt++;
            else if(j1>=0&&((a[j2]-a[j1])==m)) cnt++;
        }
    }
    printf("%d", cnt);
}