#include <stdio.h>
#include <stdlib.h>
int a[200000][3], b[200000][3], bind;
int compare(const void* a, const void* b) {
    return (*(int(*)[3])a)[0]-(*(int(*)[3])b)[0];
}
int bput(int t, int tt, int ttt) {
    b[bind][0]=t;
    b[bind][1]=tt;
    b[bind++][2]=ttt;
}
int main() {
    int n, s, e, c;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    qsort(a, n, sizeof(a[0]), compare);
    s=a[0][0]; e=a[0][1]; c=a[0][2];
    for(int i=1;i<n;i++) {
        int ns=a[i][0], ne=a[i][1], nc=a[i][2];
        if(e<ns) {
            bput(s, e, c);
            s=ns; e=ne; c=nc;
        }
        else {
            if(c>nc) c=nc;
            if(e<ne) e=ne;
        }
    }
    bput(s, e, c);
    printf("%d\n", bind);
    for(int i=0;i<bind;i++) {
        for(int j=0;j<3;j++) {
            printf("%d%c", b[i][j], j+1<3?' ':'\n');
        }
    }
}