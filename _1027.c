#include <stdio.h>
int n, a[50];
int fun(int t) {
    int i, j, cha, ii, ret=0;
    for(i=0;i<n;i++) {
        if(i==t) continue;
        ii=t-i; cha=a[t]-a[i]; 
        for(j=i;ii<0?j>t:j<t;ii<0?j--:j++) {

        }
        if(j==cha) ret++;
    }
    return ret;
}
int main() {
    int i, max=0, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);   
    }
    for(i=0;i<n;i++) {
        if((t=fun(i))>max||!i) {
            max=t;
        }
    }
    printf("%d", max);
}