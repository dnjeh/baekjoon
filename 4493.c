#include <stdio.h>
int main() {
    char t, tt;
    int T, n, tcnt;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tcnt=0;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            scanf(" %c %c", &t, &tt);
            if(t=='R'&&tt=='S'||t=='S'&&tt=='P'||t=='P'&&tt=='R') tcnt--;
            else if(t!=tt) tcnt++;
        }
        printf("%s\n", tcnt>0?"Player 2":(tcnt<0?"Player 1":"TIE"));
    }
}