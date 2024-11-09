#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
    return (*(int(*)[2])a)[1]-(*(int(*)[2])b)[1];
}
int fun(int a[][2], int n, int siz) {
    int ret=0, now=-1;
    for(int i=0;i<n;i++) {
        if(now==-1||now+siz<=a[i][1]) {
            ret++;
            now=a[i][1];
        }
    }
    return ret;
} 
int main() {
    int a[1000][2], bind;
    int n, m, rim, c, max=0, maxy=0;
    scanf("%d %d %d %d", &n, &m, &rim, &c);
    for(int i=0;i<c;i++) {
        scanf("%d %d", &a[i][0], &a[i][1]);
        if(maxy<a[i][0]) maxy=a[i][0];
        if(max<a[i][0]) max=a[i][0];
        if(max<a[i][1]) max=a[i][1];
    }
    qsort(a, c, sizeof(a[0]), compare);
    int mid, up, dwn;
    for(up=n>m?n:m, dwn=maxy;up>dwn;) {
        mid=(up+dwn)/2;
        if(fun(a, c, mid)>rim) dwn=mid+1;
        else up=mid;
    }
    printf("%d", up);
}