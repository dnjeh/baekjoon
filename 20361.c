#include <stdio.h>
int main() {
    int a, b, c, t, tt;
    scanf("%d %d %d", &a, &b, &c);
    for(int i=0;i<c;i++) {
        scanf("%d %d", &t, &tt);
        if(t==b||tt==b) {
            b=t==b?tt:t;
        }
    }
    printf("%d", b);
}