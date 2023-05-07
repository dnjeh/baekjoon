#include <stdio.h>
int r, c, k, cnt=0;
void load(int a[][5], int _t) {
    for(int i=4;i>=0;i--) {
        for(int j=4;j>=0;j--) {
            a[i][j]=_t&1;
            _t>>=1;
        }
    }
}
int unload(int a[][5]) {
    int _t=0;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            _t|=a[i][j];
            _t<<=1;
        }
    }
    _t>>=1;
    return _t;
}
void step(int x, int y, int _cnt, int map) {
    int t[5][5];
    if(x+1==c&&y+1==r) { 
        if(_cnt==k) cnt++;
        return;
    }
    load(t, map);
    t[y][x]=1;
    for(int d=-1;d<=1;d+=2) {
        if(x+d<c&&x+d>=0&&!t[y][x+d]) {
            step(x+d, y, _cnt+1, unload(t));
        }
        if(y+d<r&&y+d>=0&&!t[y+d][x]) {
            step(x, y+d, _cnt+1, unload(t));
        }
    }
}
int main() {
    scanf("%d %d %d", &r, &c, &k);
    int t[5][5]={{0, }, };
    char ct[6];
    for(int i=r-1;i>=0;i--) {
        scanf("%s", ct);
        for(int j=0;j<c;j++) {
            if(ct[j]=='T') t[i][j]=1;
        }
    }
    step(0, 0, 1, unload(t));
    printf("%d", cnt);
}