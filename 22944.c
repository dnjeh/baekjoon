#include <stdio.h>
int a[500][500], b[2][12], bind;
void bput(int y, int x) {
    b[0][bind]=y;
    b[1][bind++]=x;
}
int abs(int t) {
    return t<0?t*-1:t;
}
int chkh(int d, int h, int diff) {
    return h+(d-diff+1>0?0:d-diff+1);
}
int bak(int now, int h, int d, int leg, int y, int x, int ey, int ex, int* ret) {
    int diff=abs(ey-y)+abs(ex-x);
    if(chkh(now?d-1:0, h, diff)>0&&(*ret==-1||*ret>leg+diff)) *ret=leg+diff;
    if(now<bind) {
        for(int i=0;i<bind;i++) {
            int dy=b[0][i], dx=b[1][i], t, _t, _diff=abs(dy-y)+abs(dx-x);
            if(dy!=-1&&(t=chkh(now?d-1:0, h, _diff))>0) {
                _t=dy;
                b[0][i]=-1;
                bak(now+1, t, d, leg+_diff, dy, dx, ey, ex, ret);
                b[0][i]=_t;
            }
        }
    }
    return *ret;
}
int main() { 
    int h, d, n, y, x, ey, ex, min=-1;
    char t[510];
    scanf("%d %d %d", &n, &h, &d);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<n;j++) {
            if(t[j]=='S') {
                y=i; x=j;
            }
            else if(t[j]=='E') {
                ey=i; ex=j;
            }
            else if(t[j]=='U') {
                bput(i, j);
            }
        }
    }
    printf("%d", bak(0, h, d, 0, y, x, ey, ex, &min));
}