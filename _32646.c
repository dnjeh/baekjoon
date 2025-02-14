#include <stdio.h>
int a[100][100], b[2][100][100], d[100][100], vis[100][100];
int n, sta, end, now;
int main() {
    int n, m, k, Tt[3], min[2], f=0, max=0;
    for(i=0;i<1000;i++) { for(j=0;j<1000;j++) p[i][j]=-1; d[i]=-1; }
    scanf("%d %d %d", &n, &m, &sta);
    for(i=0;i<m;i++) {
        for(j=0;j<3;j++) scanf("%d", &t[j]);
        t[0]--; t[1]--; 
        if(p[t[0]][t[1]]==-1||p[t[0]][t[1]]>t[2]) p[t[0]][t[1]]=t[2];
        if(p[t[1]][t[0]]==-1||p[t[1]][t[0]]>t[2]) p[t[1]][t[0]]=t[2];
    }
    sta--; d[sta]=0;
    for(now=sta;now!=-1;now=min[0]) {
        for(i=0;i<1000;i++) {
            if(p[now][i]!=-1&&((d[now]+p[now][i]<d[i])||d[i]==-1)) {
                d[i]=d[now]+p[now][i];
            }
        }
        vis[now]=1; 
        min[0]=-1;
        for(f=i=0;i<1000;i++) {
            if(!vis[i]&&d[i]!=-1&&(!f||min[1]>d[i])) {
                min[0]=i;
                min[1]=d[i];
                f=1;
            }
        }
    }
    printf("%d", max*2);
}