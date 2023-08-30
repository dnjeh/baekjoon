#include <stdio.h>
int p[1000][1000], dd[1000], ddd[1000], vis[1000], n;
void set();
void deik(int sta, int d[], int re) {
    int i, j, now, min[2], f;
    int vis[n], cnt=1;
    for(i=0;i<n;i++) { d[i]=-1; vis[i]=0; } 
    d[sta]=0;
    for(now=sta;cnt<n;now=min[0]) {
        for(i=0;i<n;i++) {
            if(p[re?i:now][re?now:i]!=-1&&((d[now]+p[re?i:now][re?now:i]<d[i])||d[i]==-1)) {
                d[i]=d[now]+p[re?i:now][re?now:i];
            }
        }
        vis[now]=1; cnt++;
        for(f=i=0;i<n;i++) {
            if(!vis[i]&&d[i]!=-1&&(!f||min[1]>d[i])) {
                min[0]=i;
                min[1]=d[i];
                f=1;
            }
        }
    }
}
int main() {
    int m, i, j, t[3], f=0, to, tmax, max=0;
    scanf("%d %d %d", &n, &m, &to);
    set();
    for(i=0;i<m;i++) {
        for(j=0;j<3;j++) scanf("%d", &t[j]);
        t[0]--; t[1]--; 
        if(p[t[0]][t[1]]==-1||p[t[0]][t[1]]>t[2]) p[t[0]][t[1]]=t[2];
    }
    to--;
    deik(to, dd, 0);
    deik(to, ddd, 1);
    for(i=0;i<n;i++) {
        if(dd[i]<0||ddd[i]<0) continue;
        tmax=dd[i]+ddd[i];
        if(tmax>max) max=tmax;
    }
    printf("%d", max);
}
void set() {
    int i, j;
    for(i=0;i<n;i++) for(j=0;j<n;j++) p[i][j]=-1; 
}