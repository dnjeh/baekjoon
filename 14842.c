#include <stdio.h>
int main() {
    int n, max=0, cnt=0, now=0, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(now<t) {
            now=t;
            cnt=0;
        }
        else {
            cnt++;
            if(max<cnt) max=cnt;
        }
    }
    printf("%d", max);
}