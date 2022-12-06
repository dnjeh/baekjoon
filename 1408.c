#include <stdio.h>
int main() {
    int t, a[2]={0}, i, j, b;
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            scanf("%d", &t);
            if(!j) {
                a[i]+=t*3600;
            }
            else if(j==1) {
                a[i]+=t*60;
            }
            else {
                a[i]+=t;
            }
        }
        while(getchar()!='\n') {}
    }
    if(a[0]<a[1]) {
        b=a[1]-a[0];
    }
    else {
        b=24*3600-a[0]-a[1];
    }
    printf("%02d:%02d:%02d", b/3600, b%3600/60, b%60);
}