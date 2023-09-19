#include <stdio.h>
int a[10][10], b[10][10], vis[10][10];
int cnt;
int updt(int y, int x) {
    int ret=a[y][x]?1:0;
    if(y-1>=0&&a[y-1][x]) ret++;
    if(y+1<10&&a[y+1][x]) ret++;
    if(x-1>=0&&a[y][x-1]) ret++;
    if(x+1<10&&a[y][x+1]) ret++; 
    return ret;
}
void printa() {
    int i, j;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            printf("%d", b[i][j]/*?'O':'#'*/);
        }
        printf("\n");
    }
    printf("---------\n");
}
int main() {
    int i, j, tmax, nx, ny, d, f=1;
    char t[11];
    for(i=0;i<10;i++) {
        scanf("%s", t);
        for(j=0;j<10;j++) {
            if(t[j]=='O') {
                a[i][j]=1; 
                f=0;
            }
        }
    }
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            b[i][j]=updt(i, j);
            if(b[i][j]>tmax) {
                tmax=b[i][j];
                nx=i;
                ny=j;
            }
        }
    }
    for(;cnt<100&&!f;cnt++) {
        vis[ny][nx]=1;
        for(d=-1;d<=1;d++) {
            if(ny+d>=0&&ny+d<10) a[ny+d][nx]=!a[ny+d][nx];
            if(d&&nx+d>=0&&nx+d<10) a[ny][nx+d]=!a[ny][nx+d];
        }
        for(i=-2;i<=2;i++) {
            for(j=-2;j<=2;j++) {
                if(ny+i>=0&&nx+j>=0&&ny+i<10&&nx+j<10)
                    b[ny+i][nx+j]=updt(ny+i, nx+j);
            }
        }
        for(tmax=-1, i=0, f=1;i<10;i++) {
            for(j=0;j<10;j++) {
                if(!vis[i][j]&&b[i][j]>tmax) {
                    tmax=b[i][j];
                    ny=i;
                    nx=j;
                    if(b[i][j]) f=0;
                }
            }
        }
    }
    if(f) printf("%d", cnt);
    else printf("-1");
}