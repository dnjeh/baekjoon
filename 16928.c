#include <stdio.h>
int g[100], vis[100], q[110];
int n, m;
int main() {
    int i, j, t1, t2, cnt=0, ind=0, dind, f=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d %d", &t1, &t2);
        g[t1-1]=t2-1;
    }
    for(i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        g[t1-1]=t2-1;
    }
    vis[0]=1;
    q[ind++]=0;
    for(i=cnt=0;!f;cnt++) {
        for(dind=ind;!f&&i<dind;i++) {
            if(q[i]==99) f=1;
            else for(j=1;j<=6;j++) {
                if(q[i]+j<100&&!vis[q[i]+j]) {
                    vis[q[i]+j]=1;
                    q[ind++]=q[i]+j;
                    if(g[q[i]+j]) {
                        vis[g[q[i]+j]]=1;
                        q[ind-1]=g[q[i]+j];
                    }
                }
            }
        }
    }
    printf("%d", cnt-1);
}