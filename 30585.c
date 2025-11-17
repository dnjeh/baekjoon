#include <stdio.h>
int main() {
    int h, w, t, cnt=0;
    scanf("%d %d", &h, &w);
    for(int i=0;i<h*w;i++) {
        scanf("%1d", &t);
        cnt+=t;
    }
    printf("%d", h*w-cnt<cnt?h*w-cnt:cnt);
}