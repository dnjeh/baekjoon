#include <stdio.h>
int a[8], b[8], n, m;
void back(int cnt, int min) {
    if(cnt==m) {
        for(int i=0;i<m;i++) {
            printf("%d%c", b[i], i+1<m?' ':'\n');
        }
    }
    else for(int i=0;i<n;i++) {
        if(min<a[i]) {
            b[cnt]=a[i];
            back(cnt+1, a[i]);
        }
    }
}
int main() {
    int it, i;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) a[i]=i+1;
    back(0, 0);
} 