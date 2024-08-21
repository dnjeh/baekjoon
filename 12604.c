#include <stdio.h>

int main() {
    int a[2000]={0, };
    int T, c, l, f;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        f=0;
        scanf("%d %d", &c, &l);
        for(int j=0;j<l;j++) {
            scanf("%d", &a[j]);
        }
        for(int ii=0;ii<l-1&&!f;ii++) {
            for(int jj=ii+1;jj<l&&!f;jj++) {
                if(a[ii]+a[jj]==c) {
                    printf("Case #%d: %d %d\n", i+1, ii+1, jj+1);
                    f=1;
                }
            }
        }
    }
    return 0;
}
