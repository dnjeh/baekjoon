#include <stdio.h>
void fill(char _ch, int arr[]) {
    if(_ch==' ') _ch=0;
    else _ch-=64;
    for(int i=4;i>=0;i--) {
        arr[i]=_ch&1;
        _ch>>=1;
    }
}
int main() {
    int i, j, r, c, T, cnt, vec=0;
    char t[110];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &r, &c);
        getchar();
        for(j=0;!j||t[j-1]!='\n';j++) scanf("%c", &t[j]);
        t[j-1]=0;
        int a[r][c], it[5], x=0, y=0;
        for(int i=0;i<r;i++) for(int j=0;j<c;j++) a[i][j]=-1;
        for(cnt=vec=0;cnt<r*c;cnt++) {
            if(!t[cnt/5]) break;
            if(!(cnt%5)) fill(t[cnt/5], it);
            a[y][x]=it[cnt%5];
            switch(vec%4) {
            case 0:
                if(x+1==c||a[y][x+1]!=-1) {
                    vec++; y++;
                } 
                else x++;
                break;
            case 1:
                if(y+1==r||a[y+1][x]!=-1) {
                    vec++; x--;
                }
                else y++;
                break;
            case 2:
                if(x-1<0||a[y][x-1]!=-1) {
                    vec++; y--;
                }
                else x--;
                break;
            case 3:
                if(y-1<0||a[y-1][x]!=-1) {
                    vec++; x++;
                }
                else y--;
            }
        }
        for(int i=0;i<r;i++) for(int j=0;j<c;j++) printf("%d", a[i][j]>=0?a[i][j]:0);
        printf("\n");
    }
}