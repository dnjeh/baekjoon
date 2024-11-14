#include <stdio.h>
#include <math.h>
int a[4097][4097], d, u, imax, max;
int udfs(int now, int it, int itsum) {
    int ret=0, t;
    if(now*2>=pow(2, d)) return 0;
    if(!a[now][now*2]&&!a[now][now*2+1]) {
        if(ret<(t=udfs(now*2, it, itsum+it)+u+itsum+it)) ret=t;
        if(ret<(t=udfs(now*2+1, it, itsum+it)+u+itsum+it)) ret=t;
    }
    else if(!a[now][now*2]) {
        if(ret<(t=udfs(now*2, it, itsum)+u+itsum)) ret=t;
    }
    else if(!a[now][now*2+1]) {
        if(ret<(t=udfs(now*2+1, it, itsum)+u+itsum)) ret=t;
    }
    return ret;
}
int dfs(int now, int ret) {
    max=ret;
    //printf("%d\n", ret);
    for(int i=now*2;i<=now*2+1&&i<pow(2, d);i++) {
        if(!a[now][i]) {
            ret=dfs(i, ret+u);
        }
    }
    return ret+u;
}
int main() {
    int n, t, tt, T, ttt;
    char *ct;
    scanf("%d %d %d %d", &d, &n, &u, &T);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        a[t][tt]=1;
        a[tt][t]=1;
    }
    dfs(1, 0);
    if((t=udfs(1, T, 0))<(tt=max)) ct=":blob_twintail_aww:";
    else if(t>tt) ct=":blob_twintail_sad:";
    else ct=":blob_twintail_thinking:";
    //printf("%d %d\n", t, tt);
    printf("%s", ct);
    return 0;
}
