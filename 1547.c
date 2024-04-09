#include <stdio.h>

int main() {
    int a[4]={0, 1, 0, 0};
    int t, tt, ttt;
    int m;
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        ttt=a[t];
        a[t]=a[tt];
        a[tt]=ttt;
    }
    for(int i=0;i<=3;i++) {
        if(a[i]) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
