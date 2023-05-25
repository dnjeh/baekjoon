#include <stdio.h>
int a[10000], b[10000], cnt[10000];
int dp(int _t) {
    int ret=0, t1, t2, t3, t4;
    if(_t<0) ret=0;
    else if(b[_t]!=-1) ret=b[_t];
    else {  
        if((t1=dp(_t-1))+a[_t]>ret&&cnt[_t-1]<=1) {
            ret=t1+a[_t];
            cnt[_t]=_t-1>=0?2:1;
        }
        if((t2=dp(_t-2))+a[_t]>ret) {
            ret=t2+a[_t];
            cnt[_t]=1;
        }
        if((t3=dp(_t-3))+a[_t-1]+a[_t]>ret) {
            ret=t3+a[_t-1]+a[_t];
            cnt[_t]=2;
        }
        if((t4=dp(_t-4))+a[_t-1]+a[_t]>ret) {
            ret=t4+a[_t-1]+a[_t];
            cnt[_t]=2;
        }
        b[_t]=ret;
    }
    return ret;
}
int main() {
    int i, n, max=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        b[i]=-1;
    }
    dp(n-1);
    for(i=0;i<n;i++) {
        if(!i||max<b[i]) max=b[i];
    }
    printf("%d", max);
}