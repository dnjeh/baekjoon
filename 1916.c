#include <stdio.h>
int p[1000][1000], d[1000], vis[1000];
int n, sta, end, now;
int main() {
    int m, i, j, t[3], min[2], f=0;
    for(i=0;i<1000;i++) { for(j=0;j<1000;j++) p[i][j]=-1; d[i]=-1; }
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        for(j=0;j<3;j++) scanf("%d", &t[j]);
        t[0]--; t[1]--; t[2]--;
        if(p[t[0]][t[1]]==-1||p[t[0]][t[1]]>t[2]) p[t[0]][t[1]]=t[2];
    }
    scanf("%d %d", &sta, &end); 
    sta--; end--; d[sta]=0;
    for(now=sta;!vis[end];now=min[0]) {
        for(i=0;i<1000;i++) {
            if(p[now][i]!=-1&&((d[now]+p[now][i]<d[i])||d[i]==-1)) {
                d[i]=d[now]+p[now][i];
            }
        }
        vis[now]=1; 
        for(f=i=0;i<1000;i++) {
            if(!vis[i]&&d[i]!=-1&&(!f||min[1]>d[i])) {
                min[0]=i;
                min[1]=d[i];
                f=1;
            }
        }
    }
    printf("%d", d[end]);
}