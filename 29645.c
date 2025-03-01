#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LL long long
#define MOD 10007
char b[MOD][210];
int a[MOD][4];
void mod(LL int *t, LL int tt) {
    *t=(tt%MOD);
}
int fun(char *t, int n) {
    LL int ret=5381;
    for(int i=0;;i++) {
        mod(&ret, ret*33+t[i%n]);
        if(!a[ret][0]||!strcmp(b[ret], t)) break;
    }
    if(!a[ret][0]) {
        a[ret][0]=ret;
        strcpy(b[ret], t);
    }
    return ret;
}
int compare(const void* _a, const void* _b) {
    int *__a=(int(*)[4])_a, *__b=(int(*)[4])_b;
    for(int i=1;i<4;i++) {
        if(__a[i]-__b[i]) return __b[i]-__a[i];
    }
    return strcmp(b[__a[0]], b[__b[0]]);
}
int main() {
    int n;
    char t[210];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<3;j++) {
            scanf(" %s", t);
            a[fun(t, strlen(t))][j+1]++;
        }
    }
    qsort(a, MOD, sizeof(a[0]), compare);
    printf("%s", b[a[0][0]]);
}