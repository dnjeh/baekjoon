#include <stdio.h>
int main() {
    int k, x, y, a[2][4][4] = {{{1, 1}, {1, 1}}, {
        {1, 1, 2, 2},
        {1, 5, 5, 2},
        {3, 5, 5, 4},
        {3, 3, 4, 4},
    }};
    scanf("%d", &k);
    scanf("%d %d", &x, &y);
    x--; y--;
    a[k-1][y][x]=-1;
    if(k>1&&!(y>=1&&y<=2&&x>=1&&x<=2)) {
        switch(y/2*2+x/2) {
        case 0:
            a[1][1][1]=1;
            break;
        case 1:
            a[1][1][2]=2;
            break;
        case 2:
            a[1][2][1]=3;
            break;
        case 3:
            a[1][2][2]=4;
            break;
        default:
            break;
        } 
    }
    for(int i=2*k-1;i>=0;i--) {
        for(int j=0;j<2*k;j++) {
            printf("%d%c", a[k-1][i][j], j+1==2*k?'\n':' ');
        }
    }
}