#include <stdio.h>
int main() {
    int a, t, ans=0;
    scanf("%d", &a);
    for(int i=0;i<4;i++) {
        scanf("%d", &t);
        if(t+1000>=a) ans++;
    }
    printf("%d", ans);
}