#include <stdio.h>
int p[1001][1001], d[2][1001], vis[1001];
int n, sta, end, now;
int fun(int to, int cnt) {
    if(d[1][to]==to) printf("%d\n", cnt);
    else fun(d[1][to], cnt+1);
    printf("%d ", to);
}
int main() {
    int m, i, j, t[3], min[2], f=0;
    for(i=1;i<=1000;i++) { for(j=1;j<=1000;j++) p[i][j]=-1; d[0][i]=-1; }
    scanf("%d\n%d", &n, &m);
    for(i=0;i<m;i++) {
        for(j=0;j<3;j++) scanf("%d", &t[j]);
        if(p[t[0]][t[1]]==-1||p[t[0]][t[1]]>t[2]) p[t[0]][t[1]]=t[2];
    }

    scanf("%d %d", &sta, &end); 
    d[0][sta]=0; d[1][sta]=sta;
    for(now=sta;!vis[end];now=min[0]) {
        for(i=1;i<=1000;i++) {
            if(p[now][i]!=-1&&((d[0][now]+p[now][i]<d[0][i])||d[0][i]==-1)) {
                d[0][i]=d[0][now]+p[now][i];
                d[1][i]=now;
            }
        }
        vis[now]=1; 
        for(f=0, i=1;i<=1000;i++) {
            if(!vis[i]&&d[0][i]!=-1&&(!f||min[1]>d[0][i])) {
                min[0]=i;
                min[1]=d[0][i];
                f=1;
            }
        }
    }
    printf("%d\n", d[0][end]);
    fun(end, 1);
}