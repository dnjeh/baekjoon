#include <stdio.h>

int main() {
    int T, t, tt, tsum;
    int a[2][6] = {{5000000, 3000000, 2000000, 500000, 300000, 100000}, {1, 2, 3, 4, 5, 6}};
    int b[2][5] = {{5120000, 2560000, 1280000, 640000, 320000}, {1, 2, 4, 8, 16}};
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tsum=0;
        scanf("%d %d", &t, &tt);
        if(t) for(int j=0;j<6;j++) {
            if(a[1][j]>=t) {
                tsum+=a[0][j];
                break;
            }
            else {
                t-=a[1][j];
            }
        }
        if(tt) for(int j=0;j<5;j++) {
            if(b[1][j]>=tt) {
                tsum+=b[0][j];
                break;
            }
            else {
                tt-=b[1][j];
            }
        }
        printf("%d\n", tsum);    
    }
    return 0;
}
