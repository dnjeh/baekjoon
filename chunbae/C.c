#include <stdio.h>
int a[100000];
int n, k;
int main() {
    int i, cnt=0, now=-1;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    } now=a[0]+k;
    for(i=0;i<n;i++) {
        if(now==-1) now=a[i]+k;
        if(a[i]>now) {
            cnt++;
            now=a[i]+k;
        }
        else if(a[i]==now) {
            cnt++;
            now=-1;
        }
    }
    if(now!=-1) cnt++;
    printf("%d", cnt);
}