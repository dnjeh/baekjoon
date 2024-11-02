#include <stdio.h>
int main() {
    int n, a[10]={0, }, cnt=0, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        t--;
        if(a[t]&&a[t]!=tt+1) cnt++;
        a[t]=tt+1;
    }
    printf("%d", cnt);
}