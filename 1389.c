#include <stdio.h>
int a[100][100], q[110];
int n, m;
int bfs(int sta, int fin) {
    int cnt, ind=0, dind, vis[100]={0, }, i, f=0, j;
    q[ind++]=sta;
    for(cnt=0;!f;cnt++) {
        for(i=0, dind=ind;!f&&i<dind;i++) {
            if(q[i]==fin) f=1;

            for(j=0;!f&&j<n;j++) {
                if(!vis[j]&&a[q[i]][j]) {
                    q[ind++]=j;
                    vis[j]=1;
                }
            }
        }
    }
    return cnt-1;
}
int main() {
    int i, j, t1, t2, tsum, min=0, ans;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        a[--t1][--t2]=1;
        a[t2][t1]=1;
    }
    for(i=n-1;i>=0;i--) {
        for(tsum=j=0;j<n;j++) {
            tsum+=bfs(i, j);
        }
        if(!min||tsum<=min) {
            min=tsum;
            ans=i+1;
        }
    }
    printf("%d", ans);
}
