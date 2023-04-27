#include <stdio.h>
int a[19][19];
int find(int _x, int _y, int h1, int h2, int h) {
    if(_x>=0&&_y>=0&&_x<19&&_y<19&&a[_y][_x]==h) {
        return 1+find(h1+_x, h2+_y, h1, h2, h);
    }
    else return 0;
}
int mfind(int _x, int _y, int h) {
    int t[3][3]={{0, }, };
    for(int _i=-1;_i<=1;_i++) {
        for(int _j=-1;_j<=1;_j++) {
            if(!(_i||_j)) continue;
            if(_i+_x>=0&&_j+_y>=0&&_i+_x<19&&_j+_y<19&&a[_j+_y][_i+_x]==h) {
                t[_i+1][_j+1]=find(_i+_x, _j+_y, _i, _j, h);
            }
        }
    }
    if(t[0][0]+t[2][2]==4||t[0][1]+t[2][1]==4||t[0][2]+t[2][0]==4||t[1][0]+t[1][2]==4) return 1;
    else return 0;
}
int main() {
    int n, i, x, y;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d %d", &y, &x);
        a[--y][--x]=i%2?-1:1;
        if(mfind(x, y, i%2?-1:1)) {
            printf("%d", i+1);
            return 0;
        }
    }
    printf("-1");
}