#include <stdio.h>
int main() {
    double l;
    int a[11], n, b, s, ans=0;
    for(int i=0;i<=10;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %lf %d", &b, &l, &s);
        if(s>=17&&l>=2.0) ans+=a[b];
    }
    printf("%d", ans);
}