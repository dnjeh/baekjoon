#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100000
typedef struct {
    char name[26];
    int x, y;
} place;
place a[MAX];
int compare(const void *_a, const void *_b) {
    return strcmp((*(place*)_a).name, (*(place*)_b).name);
}
int abs(int _a) {
    return _a<0?_a*-1:_a;
}
int main() {
    char t[26];
    int n, pre, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s %d %d", a[i].name, &a[i].x, &a[i].y);
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        int up, dwn, mid;
        up=n-1; dwn=0;
        for(mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
            int cns=strcmp(a[mid].name, t);
            if(!cns) break;
            else if(cns<0) dwn=mid+1;
            else up=mid-1;
        }
        if(i) {
            ans+=abs(a[pre].x-a[mid].x)+abs(a[pre].y-a[mid].y);
        }
        pre=mid;
    }
    printf("%d", ans);
}