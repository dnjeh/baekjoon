#include <stdio.h>
int a[5000][5000];
int main() {
    int n, m, i, j, cnt=0, x, y, foro=0;
    scanf("%d %d", &m, &n);
    for(x=y=0;cnt<n*m;) {
        if(!a[y][x]) {
            a[y][x]=1;
            cnt++;
        }
        switch(foro%4) {
        case 0:
            if(x+1>=m||a[y][x+1]) foro++;
            else x++;
            break;
        case 1:
            if(y+1>=n||a[y+1][x]) foro++;
            else y++;
            break;
        case 2:
            if(x-1<0||a[y][x-1]) foro++;
            else x--;
            break;
        case 3:
            if(y-1<0||a[y-1][x]) foro++;
            else y--;
            break;
        default:
            break;
        }
        /*for(i=0;i<n;i++) {
            for(j=0;j<m;j++) 
                printf("%d ", a[i][j]);
            printf("\n");
        }
        printf("%d\n", cnt);*/
    }
    printf("%d %d", x, y);
}