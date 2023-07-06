#include <stdio.h>
int p[800][800], n;
int dik(int sta, int end) {
    int d[800], vis[800]={0, }, min[2], f, i, now;
    for(i=0;i<n;i++) d[i]=-1;
    d[sta]=0;
    for(now=sta;!vis[end];now=min[0]) {
        for(i=0;i<n;i++) {
            if(p[now][i]!=-1&&((d[now]+p[now][i]<d[i])||d[i]==-1)) {
                d[i]=d[now]+p[now][i];
            }
        }
        vis[now]=1; 
        for(f=i=0;i<n;i++) {
            if(!vis[i]&&d[i]!=-1&&(!f||min[1]>d[i])) {
                min[0]=i;
                min[1]=d[i];
                f=1;
            }
        }
        if(!f) break;
    }
    return d[end];
}
int main() {
    int m, i, j, t[3], di[5], v, vv, f1=0, f2=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) for(j=0;j<n;j++) p[i][j]=-1;
    for(i=0;i<m;i++) {
        for(j=0;j<3;j++) scanf("%d", &t[j]);
        t[0]--; t[1]--;
        if(p[t[0]][t[1]]==-1||p[t[0]][t[1]]>t[2]) p[t[0]][t[1]]=t[2];
        if(p[t[1]][t[0]]==-1||p[t[1]][t[0]]>t[2]) p[t[1]][t[0]]=t[2];
    }
    scanf("%d %d", &v, &vv); 
    v--; vv--; 
    di[0]=dik(0, v); di[1]=dik(0, vv); di[2]=dik(v, vv); 
    di[3]=dik(v, n-1); di[4]=dik(vv, n-1);
    for(i=0;i<5;i++) {
        if(di[i]<0) {
            if(i%2) f1=1;
            else f2=1;
        }
    }
    if(di[2]<0) {
        printf("-1");
        return 0;
    }
    if(!f1&&!f2) {  
        printf("%d", di[1]+di[2]+di[3]<di[0]+di[2]+di[4]?di[1]+di[2]+di[3]:di[0]+di[2]+di[4]);
    }
    else if(!f1) printf("%d", di[0]+di[2]+di[4]);
    else if(!f2) printf("%d", di[1]+di[2]+di[3]);
    else printf("-1");
}