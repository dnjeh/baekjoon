#include <stdio.h>
int a[600][600];
int n, m, cnt;
void find(int _y, int _x) {
    if(a[_y][_x]==1) cnt++;
    a[_y][_x]=-1;
    if(_x+1<m&&a[_y][_x+1]!=-1) find(_y, _x+1);
    if(_x-1>=0&&a[_y][_x-1]!=-1) find(_y, _x-1);
    if(_y+1<n&&a[_y+1][_x]!=-1) find(_y+1, _x);
    if(_y-1>=0&&a[_y-1][_x]!=-1) find(_y-1, _x);
}
int main() {
    int i, j, x, y;
    scanf("%d %d", &n, &m);
    char t[m+1];
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(j=0;j<m;j++) {
            switch(t[j]) {
            case 'I': x=j; y=i; break;
            case 'X': a[i][j]=-1; break;
            case 'P': a[i][j]=1;
            }
        }
    }
    find(y, x); 
    if(cnt) printf("%d", cnt);
    else printf("TT");
}