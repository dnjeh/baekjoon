#include <stdio.h>
int a[5100];
int n; 
int is(int t, int tt) {
    if(a[t]==a[t-(tt*2+1)]) return 1;
    else return 0;
}
int main() {
    int i, cnt=0, tcnt, rcnt;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(rcnt=tcnt=i=0;i<n;i++) {
        if(!tcnt||!is(i, rcnt)) {
            tcnt++;
            rcnt=0;
        }
        else if(is(i, rcnt)) {
            rcnt++;
            if(rcnt==tcnt) {
                cnt++;
                rcnt=tcnt=0;
            }
        }
    }
    printf("%d", tcnt||rcnt?-1:cnt);
}
   
   