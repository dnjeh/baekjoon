#include <stdio.h>
int main() {
    int n, y, t, cnt=0;
    scanf("%d %d", &n, &y);
    int a[n];
    for(int i=0;i<n;i++) {
        a[i]=0;
    }
    for(int i=0;i<y;i++) {
        scanf("%d", &t);
        if(!a[t]) {
            a[t]=1;
            cnt++;
        }
    }
    for(int i=0;i<n;i++) {
        if(!a[i]) printf("%d\n", i);
    }
    printf("Mario got %d of the dangerous obstacles.", cnt);
}