#include <stdio.h>
int t[10001];
int a[8], b[8], n, m;
void find(int cnt) {
    int tt, mem[10001]={0, };
    if(cnt==m) for(int i=0;i<m;i++) printf("%d%c", b[i], i+1!=m?' ':'\n');
    else for(int i=0;i<n;i++) {
        if(a[i]&&!mem[a[i]]) {
            mem[a[i]]=1;
            b[cnt]=tt=a[i];
            a[i]=0;
            find(cnt+1);
            a[i]=tt;
        }
    }
}
int main() {
    int i, ti, ind=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &ti);
        t[ti]++;
    }
    for(i=1;i<=10000;i++) {
        if(t[i]) {
            a[ind++]=i;
            t[i--]--;
        }
    }
    find(0);
}