#include <stdio.h>
int main() {
    int n, t, tt, acnt=0, bcnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(t<tt) {
            bcnt++;
        }
        else if(t>tt) {
            acnt++;
        }
    }
    printf("%d %d", acnt, bcnt);
}