#include <stdio.h>

int main() {
    int T, t, tsum, min;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tsum=min=0;
        for(int j=0;j<7;j++) {
            scanf("%d", &t);
            if(!(t%2)) {
                tsum+=t;
                if(!min||min>t) {
                    min=t;
                }
            }
        }
        printf("%d %d\n", tsum, min);
    }
    return 0;
}
