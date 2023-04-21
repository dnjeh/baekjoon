#include <stdio.h>
#include <string.h>
int n;
char a[101][101], b[101][101];
void afind(int _i, int _j, char _col) {
    if(a[_i][_j]==_col) a[_i][_j]=0;
    else return;
    if((_i-1)>=0) afind(_i-1, _j, _col);
    if((_j-1)>=0) afind(_i, _j-1, _col);
    if((_i+1)<n) afind(_i+1, _j, _col);
    if((_j+1)<n) afind(_i, _j+1, _col);
    return;
}
void bfind(int _i, int _j, char _col) {
    if(b[_i][_j]==_col) b[_i][_j]=0;
    else return;
    if((_i-1)>=0) bfind(_i-1, _j, _col);
    if((_j-1)>=0) bfind(_i, _j-1, _col);
    if((_i+1)<n) bfind(_i+1, _j, _col);
    if((_j+1)<n) bfind(_i, _j+1, _col);
    return;
}
int main() {
    int i, j, asum=0, bsum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", a[i]);
        strcpy(b[i], a[i]);
        for(j=0;j<n;j++) if(b[i][j]=='R') b[i][j]='G';
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[i][j]) {
                afind(i, j, a[i][j]);
                asum++;
            }
            if(b[i][j]) {
                bfind(i, j, b[i][j]);
                bsum++;
            }
        }
    }
    printf("%d %d", asum, bsum);
}