#include <stdio.h>
int q[1000100], vis[1000001], qind;
void qput(int t, int fn) {
    vis[t]=fn;
    q[qind++]=t;
}
int flp(int t) {
    int ret=0;
    for(;t;t/=10) {
        ret*=10;
        ret+=t%10;
    }
    return ret;
}
int bfs(int end, int fn) {
    int ret=0;
    qind=0;
    qput(1, fn);
    for(int i=0, ind=0, f=0;!f&&ind<qind;ret++) {
        for(ind=qind;!f&&i<ind;i++) {
            int now=q[i];
            if(now==end) f=1;
            else {
                if(vis[now+1]!=fn) qput(now+1, fn);
                if(vis[flp(now)]!=fn) qput(flp(now), fn);
            }
        }
    }
    return ret;
}
int main() {
    int T;
    scanf("%d", &T);
    for(int i=1;i<=T;i++) {
        int n;
        scanf("%d", &n);
        printf("Case #%d: %d\n", i, bfs(n, i));
    }
    return 0;
}