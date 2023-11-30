#include <stdio.h>
int a[11];   
int cnt=0, n, end;
void printa(int tind) {
    if(end) return;
    int i;
    for(i=1;i<=tind;i++) {
        printf("%d", a[i]);
    } printf("\n");
}
void back(int tcnt, int t, int f) {
    if(end) return;
    a[tcnt]=t;
    int i;
    if(f<=0) {
        //printa(tcnt);
        cnt++;
        if(cnt-1==n) {
            printa(tcnt);
            end=1;
            return;
        }
    }
    else {
        for(i=0;i<t&&!end;i++) {
            back(tcnt+1, i, f-1);
        }
    } 
}
int main() {
    int i;
    scanf("%d", &n);
    for(i=1;i<=10;i++) {
        back(0, 10, i);
    }
    if(!end) {
        printf("-1");
    }
}
