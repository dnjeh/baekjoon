#include <stdio.h>
int a[8], b[8], vis[8], max=0, n;
void ex() {
    int _a[8], cnt=0;
    for(int i=0;i<n;i++) {
        _a[i]=a[b[i]]+(i?_a[i-1]:0);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(_a[j]+50==_a[i]) cnt++;
        }
    }
    if(max<cnt) max=cnt;
}
void bak(int now) {
    if(now>=n) ex();
    else {
        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                vis[i]=1;
                b[now]=i;
                bak(now+1);
                b[now]=0;
                vis[i]=0;
            }
        }
    }
}
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    bak(0);
    printf("%d", max);
}