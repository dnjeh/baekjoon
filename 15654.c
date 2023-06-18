#include <stdio.h>
int t[10001], a[8], b[8], n, m, ind;
void back(int cnt) {
    int _t;
    if(cnt==m) {
        for(int i=0;i<m;i++) {
            printf("%d%c", b[i], i+1<m?' ':'\n');
        }
    }
    else for(int i=0;i<ind;i++) {
        if(a[i]) {
            b[cnt]=_t=a[i];
            a[i]=0;
            back(cnt+1);
            a[i]=_t;
        }
    }
}
int main() {
    int it, i;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &it);
        t[it]++;
    } 
    for(i=1;i<=10000;i++) if(t[i]) { a[ind++]=i; t[i]--; i--; }
    back(0);
} 