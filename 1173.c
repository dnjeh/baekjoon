#include <stdio.h>
int main() {
    int goal, plu, miu, max, min, st=0, t, now=0;
    scanf("%d %d %d %d %d", &goal, &min, &max, &plu, &miu);
    now=min;
    for(t=0;st<goal;t++) {
        if(t==0&&now+plu>max) {
            printf("-1");
            return 0;
        }
        else if(now+plu<=max) {
            st++;
            now+=plu;
        }
        else if(now-miu>=min) {
            now-=miu;
        }
        else {
            now=min;
        }
    }
    printf("%d", t);
}