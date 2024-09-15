#include <stdio.h>
int a[2000][2000], b[2000][2000];
int n, m, dind, sum;
int dfs(int y, int x) {
    int t=b[y][x], dy=!(a[y][x]%2)?(a[y][x]/2?1:-1):0, dx=(a[y][x]%2)?(a[y][x]/2?-1:1):0, tt;
    b[y][x]=dind;
    if(y+dy<0||x+dx<0||y+dy>=n||x+dx>=m|(b[y+dy][x+dx]<0&&b[y+dy][x+dx]!=dind)) return 0;
    else if(b[y+dy][x+dx]>0) tt=dfs(y+dy, x+dx);
    else if(b[y+dy][x+dx]==dind) {
        b[y+dy][x+dx]=0;
        return t;
    }
    if(t>tt) t=tt;
    if(!b[y][x]) {
        sum+=t;
        return 0;
    }
    return t;
}
int main() {
    char t;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf(" %c", &t);
            switch(t) {
            case 'R':
                a[i][j]=1;
                break;
            case 'D':
                a[i][j]=2;
                break;
            case 'L':
                a[i][j]=3;
                break;
            default:
                break;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(b[i][j]>0) {
                dind--;
                dfs(i, j);
            }
        }
    }
    printf("%d", sum);
}   