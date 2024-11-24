#include <stdio.h>
#define GAP 22
int main() {
    int a[2][20][66]={{{0, }, }, }, tcnt;
    int r, c1, c2, t, cnt, f;
    scanf("%d %d %d", &r, &c1, &c2);
    for(int k=0;k<2;k++) {
        for(int i=0;i<r;i++) {
            for(int j=0;j<(k?c2:c1);j++) {
                scanf("%1d", &a[k][i][j+GAP]);
            }
        }
    }
    for(int i=0;i<r;i++) {
        tcnt=0;
        for(int k=0;k<2;k++) {
            for(int j=GAP;j<(k?c2:c1)+GAP;j++) {
                tcnt+=a[k][i][j];
            }
        }
        if(!i) cnt=tcnt;
        else if(cnt!=tcnt) {
            printf("No");
            return 0;
        }
    }
    for(int i=-c2;i<=c1;i++) {
        f=0;
        for(int k=0;k<r&&!f;k++) {
            for(int j=GAP;j<GAP+cnt&&!f;j++) {
                if(!(a[0][k][j]^a[1][k][j-i])) 
                    f=1;
            }
        }
        if(!f) {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}