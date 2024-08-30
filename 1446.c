#include <stdio.h>
int a[12][3], mem[12], n, d;
int dp(int t) {
    int _t;
    int ret=a[t][0]+a[t][2];
    if(mem[t]!=-1) ret=mem[t];
    else {
        for(int i=0;i<n;i++) {
            if(i==t) continue;
            if(a[i][1]<=a[t][0]&&ret>(_t=dp(i)+a[t][0]-a[i][1]+a[t][2])) ret=_t;
        }
        mem[t]=ret;
    }
    return ret;
}
int main() {
    int min, t;
    scanf("%d %d", &n, &d);
    for(int i=0;i<n;i++) {
        mem[i]=-1;
    }
    min=d;
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }   
    for(int i=0;i<n;i++) {
        //printf("%d\n", dp(i));
        if(a[i][1]<=d&&min>(t=dp(i)+d-a[i][1])) min=t;
    }
    printf("%d", min);
    return 0;
}
