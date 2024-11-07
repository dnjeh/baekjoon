#include <stdio.h>

int main() {
    int n, p, c, a[1000]={0, }, t, cnt=0, max=0;
    scanf("%d %d %d", &n, &p, &c);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        t--;
        a[t]++;
    }
    for(int now=0, dwn=0;now<p-1;now++) {
        cnt+=a[now];
        for(;cnt>c;) {
            cnt-=a[dwn];
            dwn++;
        }
        if(now-dwn+1>max) max=now-dwn+1;
    }
    printf("%d", max);
}
