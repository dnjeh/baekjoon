#include <stdio.h>
int ege[1000][1000], vis[1000];
int n, m, v;
int main() {
    int i, t1, t2;
    scanf("%d %d %d", &n, &m, &v);
    for(i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        ege[t1][t2]=1;
        ege[t2][t1]=1;
        
    }
}