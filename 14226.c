#include <stdio.h>
#define Q_SIZE 5001000
int q[Q_SIZE][2], vis[2000][2000], s, dind, ind; 

void qput(int t, int tt) {
    q[ind][0]=t;
    q[ind++][1]=tt;
    vis[t][tt]=1;
}   

int bfs() {
    int i=0, ret, f=0, x, y;
    for(ret=0;!f;ret++) {
        for(dind=ind;!f&&i<dind;i++) {
            x=q[i][0]; y=q[i][1];
            if(x==s) {
                f=1;
            }
            else {
                if(x+x<2000&&!vis[x][x]) qput(x, x);
                if(x+y<2000&&!vis[x+y][y]) qput(x+y, y);
                if(x-1>=0&&!vis[x-1][y]) qput(x-1, y);
            }
        }
    }
    return ret;
}

int main() {
    scanf("%d", &s);
    qput(1, 0);
    printf("%d", bfs()-1);
}
