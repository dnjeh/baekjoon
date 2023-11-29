#include <stdio.h>
int a[500];
int h, w;
int main() {
    int i, j, cnt, cntt, sum=0;
    scanf("%d %d", &h, &w);
    for(i=0;i<w;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<=h&&(!i||cnt>=2);i++) {
        for(j=cnt=0;j<w;j++) {
            if(a[j]>=i) {
                if(cnt) {
                    sum+=cntt;
                }
                cnt++;
                cntt=0;
            }
            else cntt++;
        }
    }
    printf("%d", sum);
}