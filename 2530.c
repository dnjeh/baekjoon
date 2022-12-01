#include <stdio.h>
int main() {
    int t, sum=0, i;
    for(i=0;i<4;i++) {
        scanf("%d", &t);
        switch(i) {
            case 0:
                sum+=t*3600;
                break;
            case 1:
                sum+=t*60;
                break;
            default:
                sum+=t;
                break;
        }
    }
    sum%=86400;
    printf("%d %d %d", sum/3600, (sum%3600)/60, (sum%3600)%60);
}