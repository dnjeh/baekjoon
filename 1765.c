#include <stdio.h>
int a[1001], q[1010], n, m, b[1001][1001], cnt;
void set();
int find(int t) {
    int ind=1, i, ret;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=a[q[i]]) {
            q[ind++]=a[q[i]];
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) a[q[i]]=ret;
    return ret;
}
void unin(int t1, int t2) {
    t1=find(t1); t2=find(t2);
    if(t1!=t2) 
    cnt--;
    if(t1>t2) a[t1]=t2;
    else a[t2]=t1;
}
void fun(int pre, int now, int _cnt) {
    if(_cnt>=2) unin(pre, now);
    else for(int i=1;i<=1000;i++) {
        if(i!=pre&&b[now][i]) fun(pre, i, _cnt+1);
    }
}
int main() {
    int i, j, t1, t2;
    char mod;
    scanf("%d %d", &n, &m); set();   
    cnt=n;
    for(i=0;i<m;i++) {
        scanf(" %c %d %d", &mod, &t1, &t2);
        if(mod=='F') unin(t1, t2);
        else {
            b[t1][t2]=1;
            b[t2][t1]=1;
            fun(t1, t2, 1);
            fun(t2, t1, 1);
        }   
    }
    printf("%d", cnt);
}

void set() {
    int i;
    for(i=0;i<=n;i++) a[i]=i;
}