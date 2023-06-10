#include <stdio.h>
int a[100][100], q[110];
int n;
int bfs(int sta, int fin) {
    int ind=0, vis[100]={0, }, i, f=0, j;
    q[ind++]=sta;
    for(i=0;!f&&i<ind;i++) {
        if(i&&q[i]==fin) f=1;
        for(j=0;!f&&j<n;j++) {
            if(!vis[j]&&a[q[i]][j]) {
                q[ind++]=j;
                vis[j]=1;
            }
        }
    }
    return f?1:0;
}
int main() {
    int i, j, t, tsum, min=0, ans;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++){
            scanf("%d", &t);
            a[i][j]=t;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf("%d ", bfs(i, j));
        }
        printf("\n");
    }
}
