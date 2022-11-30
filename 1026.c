#include <stdio.h>
int main() {
    int a[1001]={0}, b[101]={0}, n, i, now[2]={0, 101}, t, sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
        if(now[0]<t) now[0]=t;
    }
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        b[t]++;
        if(now[1]>t) now[1]=t;
    }
    for(i=0;i<n;i++) {
        if(a[now[0]]&&b[now[1]]) {
            a[now[0]]--;
            b[now[1]]--;
            sum+=now[0]*now[1];
        }
        else if(a[now[0]]) {
            now[1]++;
            i--;
        }
        else if(b[now[1]]) {
            now[0]--;
            i--;
        }
        else {
            now[1]++;
            now[0]--;
            i--;
        }
    }
    printf("%d", sum);
}