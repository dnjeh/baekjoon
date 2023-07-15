#include <stdio.h>
int a[50][50], n, m, y, x, d, f, cnt; //0이 -y, 1이 +x, 2이 +y, 3이 -x
int boo(int _y, int _x) {
    int ret=0;
    if(_y-1>=0&&!a[_y-1][_x]) ret++; 
    if(_y+1<n&&!a[_y+1][_x]) ret++; 
    if(_x-1>=0&&!a[_y][_x-1]) ret++; 
    if(_x+1<m&&!a[_y][_x+1]) ret++; 
    return ret;
}
int mov(int dd) { //바라보는 방향을 기준으로, 전진 혹은 후진 / 반환값은 그 방향의 칸의 상태.
    int _x=x, _y=y, ret;
    if(d%2) _x+=(d/2+dd)%2?-1:1;
    else _y+=(d/2+dd)%2?1:-1;
    ret=a[_y][_x];
    if(ret!=1) {
        x=_x; y=_y;
    }
    return ret;
}
int main() {
    int i, j;
    scanf("%d %d", &n, &m);
    scanf("%d %d %d", &y, &x, &d);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(;!f;) {
        if(!a[y][x]) {
            a[y][x]=2;
            cnt++;
        }
        else if(boo(y, x)) {
            d=(d+3)%4;
            if(mov(0)==2) {
                mov(1);
            }
        }
        else { 
            if(mov(1)==1) f=1;
        }
    }
    printf("%d", cnt);
}