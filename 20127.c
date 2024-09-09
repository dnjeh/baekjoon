#include <stdio.h>
int a[1000000];
int fun(int t) {
    return t>0?1:t<0?-1:0;
}
int main() {
    int b[3]={0,}, n, last=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(i) {
            b[fun(a[i]-a[i-1])+1]++;
        }
        if(i+1==n) last=a[i];
    }
    for(int i=0;i<n-1;i++) {
        if(!b[0]||!b[2]) {
            printf("%d", i);
            return 0;
        }
        b[fun(a[i+1]-a[i])+1]--;
        b[fun(a[i]-last)+1]++;
        last=a[i];
    }
    if(!b[0]||!b[2]) {
        printf("%d", n-1);
        return 0;
    }
    printf("-1");
}
