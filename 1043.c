#include <stdio.h>
int a[101], n, m;
void set();
int tt(int t, int to) {
    int ret;
    if(a[t]==t) ret=a[t]=to==-1?t:to;
    else ret=a[t]=tt(a[t], to);
    return ret;
}
void ttt(int *arr, int end, int to) {
    int i;
    for(i=0;i<end;i++) {
        tt(arr[i], to);
    }
}
int main() {
    int i, j, tn, b[50], f, cnt=0;
    scanf("%d %d", &n, &m);
    set();
    for(i=0;i<=m;i++) {
        f=0;
        scanf("%d", &tn);
        for(j=0;j<tn;j++) {
            scanf("%d", &b[j]);
        }
        if(!i) {
            if(!tn) {
                printf("%d", m);
                return 0;
            }
            ttt(b, tn, 0);
        }
        else {
            for(j=0;j<tn;j++) {
                if(tt(b[j], -1)) tt(b[j], 50+i);
                else f=1;
            }
        }
        if(f) tt(50+i, 0);
    }
    for(i=51;i<=50+m;i++) {
        if(tt(i, -1)) cnt++;
    }
    printf("%d", cnt);
}
void set() {
    int i;
    for(i=1;i<=n;i++) a[i]=i;
    for(i=1;i<=m;i++) a[i+50]=i+50;
}