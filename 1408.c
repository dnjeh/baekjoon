#include <stdio.h>
int main() {
    int t, t1, a[2]={0}, i, j, b;
    scanf("%d:%d:%d", &t, &t1, &a[0]);
    a[0]+=t*3600+t1*60;
    scanf("%d:%d:%d", &t, &t1, &a[1]);
    a[1]+=t*3600+t1*60;
    if(a[0]<a[1]) {
        b=a[1]-a[0];
    }
    else {
        b=24*3600-a[0]+a[1];
    }
    printf("%02d:%02d:%02d", b/3600, b%3600/60, b%60);
}