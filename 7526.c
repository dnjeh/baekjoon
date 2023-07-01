#include <stdio.h>
int bfs() {
    int q[90100][2]={{0, 0}, }, vis[300][300]={{0, }}, dind, ind=1;
    int cnt, l, j, i=0, x, y, f=0;
    scanf("%d %d %d", &l, &q[0][0], &q[0][1]);
    scanf("%d %d", &y, &x);
    for(cnt=0;!f;cnt++) {
        for(dind=ind;i<dind;i++) {
            if(q[i][1]==x&&q[i][0]==y) f=1;
            else {
                for(j=1;j<=2;j++) {
                    if(q[i][0]+j<l&&q[i][1]+(3-j)<l&&!vis[q[i][0]+j][q[i][1]+(3-j)]) {
                        vis[q[i][0]+j][q[i][1]+(3-j)]=1;
                        q[ind][0]=q[i][0]+j;
                        q[ind++][1]=q[i][1]+(3-j);
                    }
                    if(q[i][0]+j<l&&q[i][1]-(3-j)>=0&&!vis[q[i][0]+j][q[i][1]-(3-j)]) {
                        vis[q[i][0]+j][q[i][1]-(3-j)]=1;
                        q[ind][0]=q[i][0]+j;
                        q[ind++][1]=q[i][1]-(3-j);
                    }
                    if(q[i][0]-j>=0&&q[i][1]+(3-j)<l&&!vis[q[i][0]-j][q[i][1]+(3-j)]) {
                        vis[q[i][0]-j][q[i][1]+(3-j)]=1;
                        q[ind][0]=q[i][0]-j;
                        q[ind++][1]=q[i][1]+(3-j);
                    }
                    if(q[i][0]-j>=0&&q[i][1]-(3-j)>=0&&!vis[q[i][0]-j][q[i][1]-(3-j)]) {
                        vis[q[i][0]-j][q[i][1]-(3-j)]=1;
                        q[ind][0]=q[i][0]-j;
                        q[ind++][1]=q[i][1]-(3-j);
                    }
                }
            }
        }
    }
    return cnt;
}
int main() {
    int T, i;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        printf("%d\n", bfs()-1);
    }
}