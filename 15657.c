#include <stdio.h>
int t[10001], a[8], b[8], n, m, ind;
void back(int cnt, int min) {
    if(cnt==m) {
        for(int i=0;i<m;i++) {
            printf("%d%c", b[i], i+1<m?' ':'\n');
        }
    }
    else for(int i=0;i<ind;i++) {
        if(min<=a[i]) {
            b[cnt]=a[i];
            back(cnt+1, a[i]);
        }
    }
}
int main() {
    int it, i;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &it);
        t[it]=1;
    } 
    for(i=1;i<=10000;i++) if(t[i]) a[ind++]=i;
    back(0, 0);
} 