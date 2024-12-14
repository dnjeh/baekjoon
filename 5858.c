#include <stdio.h>
#include <stdlib.h>
#define MIN -2000000000
int a[100000][2];
void swap(int *a, int *b) {
    int tt=*a;
    *a=*b;
    *b=tt;
}
int compare(const void* a, const void* b) {
    int t=(*(int(*)[2])a)[0]-(*(int(*)[2])b)[0];
    if(t) return t;
    return (*(int(*)[2])a)[1]-(*(int(*)[2])b)[1];
}
int max(int a, int b) {
    return a>b?a:b;
}
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int n, t, pre=0, ans=0;
    char tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %c", &t, &tt);
        if(tt=='L') t*=-1;
        int _t=pre, _tt=pre+t;
        if(_t>_tt) swap(&_t, &_tt);
        a[i][0]=_t; a[i][1]=_tt;
        pre+=t;
    }
    qsort(a, n, sizeof(a[0]), compare);
    int _min=MIN, psta=MIN, pend=MIN;
    for(int i=0;i<n;i++) {
        int sta=a[i][0], end=a[i][1];
        if(i) {
            t=min(end, pend)-max(sta, max(_min, psta));
            if(t>0) {
                ans+=t;
                _min=min(end, pend);
            }
        }
        if(end>pend) {
            psta=sta; pend=end;
        }
        if(sta<=pend&&end>pend) {
            pend=end;
        }
    }
    printf("%d", ans);
}