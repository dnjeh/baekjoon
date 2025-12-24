#include <stdio.h>
#include <stdlib.h>
struct s3803 {
    int a, b, c;
} typedef E;
int vis[51], vcnt, a[50][50], bind;
E b[2500];
int q[30000];
int v, e;
int find(int t) {
    int ind=1, i, ret;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=vis[q[i]]) {
            q[ind++]=vis[q[i]];
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) vis[q[i]]=ret;
    return ret;
}

int compare(const void *a, const void *b) {
    int t=((E*)a)->c - ((E*)b)->c;
    return t>0?1:t<0?-1:0;
}
void set();
int main() {
    int j, t, tt, ttt, ans=0;
    for(scanf("%d", &v);v;scanf("%d", &v)) {
        ans=0;
        scanf("%d", &e);
        set();
        for(int i=0;i<e;i++) {
            scanf("%d %d %d", &t, &tt, &ttt);
            if((!(t<tt?a[t][tt]:a[tt][t]))||(t<tt?a[t][tt]:a[tt][t])>ttt) {
                if(t<tt) a[t][tt]=ttt;
                else a[tt][t]=ttt;
            }
        }
        for(int i=1;i<=v;i++) {
            for(int j=i+1;j<=v;j++) {
                if(a[i][j]) {
                    b[bind].a=i;
                    b[bind].b=j;
                    b[bind++].c=a[i][j];
                }
            }
        }
        qsort(b, bind, sizeof(b[0]), compare);
        for(int i=0, cnt=0;cnt<v&&i<bind;i++) {
            t=b[i].a; tt=b[i].b; ttt=b[i].c;
            if(find(t)!=find(tt)) {
                cnt++;
                ans+=ttt;
                t=find(t); tt=find(tt);
                if(t>tt) vis[t]=tt;
                else vis[tt]=t;
            }
        }
        printf("%d\n", ans);
    }
}
void set() {
    bind=0;
    for(int i=1;i<=v;i++) {
        vis[i]=i;
    }
    for(int i=1;i<=v;i++) {
        for(int j=i+1;j<=v;j++) {
            a[i][j]=0;
        }
    }
}