#include <stdio.h>  
int a[100001], n, s, sta, end, min=-1;
int main() {
    int i, t;
    scanf("%d %d", &n, &s);
    for(i=1;i<=n;i++) {
        scanf("%d", &t);
        a[i]+=t;
        if(i) a[i]+=a[i-1];
    }
    for(sta=end=0;sta<=n&&end<=n;) {
        if(a[end]-a[sta]>=s&&(min==-1||min>end-sta)) min=end-sta;
        if(a[end]-a[sta]<s) end++;
        else sta++;
    }
    if(min==-1) printf("0");
    else printf("%d", min);
}