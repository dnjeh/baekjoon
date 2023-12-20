#include <stdio.h>
int main() {
    int t, tt, i, cnt=0;
    scanf("%d", &t);
    for(i=0;i<5;i++) {
        scanf("%d", &tt);
        if(t==tt) cnt++;
    }
    printf("%d", cnt);
}