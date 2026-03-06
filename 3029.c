#include <stdio.h>
int main() {
    int t, tt, ttt, a[2];
    for(int i=0;i<2;i++) {
        scanf(" %d:%d:%d", &t, &tt, &ttt);
        a[i]=t*3600+tt*60+ttt;
    }
    a[0]=(a[1]-a[0]+86400)%86400;
    if(!a[0]) a[0]=86400;
    printf("%02d:%02d:%02d", a[0]/3600, a[0]/60%60, a[0]%60%60);
}