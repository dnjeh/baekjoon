#include <stdio.h>
int vis[1000001], q[1000100], qind, ind;
int f, s, g, u, d;
int main() {
    int i=0, cnt=0;
    scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
    vis[s]=1;
    for(q[qind++]=s;ind<qind;cnt++) {
        for(ind=qind;i<ind;i++) {
            if(q[i]==g) {
                printf("%d", cnt);
                return 0;
            }
            if(q[i]-d>=1&&!vis[q[i]-d]) {
                q[qind++]=q[i]-d;
                vis[q[i]-d]=1;
            }
            if(q[i]+u<=f&&!vis[q[i]+u]) {
                q[qind++]=q[i]+u;
                vis[q[i]+u]=1;
            }
        }
    }
    printf("use the stairs");
}
