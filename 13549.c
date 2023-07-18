#include <stdio.h>
int vis[100001], q[1001000][2], n, k, ind;
void set();
int main() {
    int i, _n[2];
    scanf("%d %d", &n, &k);
    set();
    q[0][0]=n; q[0][1]=0;vis[n]=0; ind=1;
    for(i=0;i<ind&&vis[k];i++) {
        _n[0]=q[i][0]; 
        _n[1]=q[i][1]; 
        if(_n[0]==k&&(vis[k]==-1||vis[k]>_n[1])) {
            vis[k]=_n[1];
        }
        if(_n[0]+1<=100000&&(vis[_n[0]+1]==-1||vis[_n[0]+1]>_n[1]+1)) {
            q[ind][0]=_n[0]+1;
            q[ind][1]=_n[1]+1;
            vis[q[ind++][0]]=_n[1]+1;
        }
        if(_n[0]-1>=0&&(vis[_n[0]-1]==-1||vis[_n[0]-1]>_n[1]+1)) {
            q[ind][0]=_n[0]-1;
            q[ind][1]=_n[1]+1;
            vis[q[ind++][0]]=_n[1]+1;
        }
        if(_n[0]*2<=100000&&(vis[_n[0]*2]==-1||vis[_n[0]*2]>_n[1])) {
            q[ind][0]=_n[0]*2;
            q[ind][1]=_n[1];
            vis[q[ind++][0]]=_n[1];
        }
    }
    printf("%d", vis[k]);
}

void set() {
    for(int i=0;i<=100000;i++) vis[i]=-1;
}