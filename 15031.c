#include <stdio.h>
#include <stdlib.h>
int a[5000][2], b[5000][3], c[5000];
int compare(const void* a, const void* b) {
    return (*(int(*)[2])b)[1]-(*(int(*)[2])a)[1];
}
int compare2(const void* a, const void* b) {
    return (*(int(*)[3])a)[1]-(*(int(*)[3])b)[1];
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i][1]);
        a[i][0]=i;
    }
    for(int k=2;k>=0;k--) {
        for(int j=0;j<m;j++) {
            if(!k) b[j][k]=j;
            else scanf("%d", &b[j][k]);
        }
    }
    qsort(a, n, sizeof(a[0]), compare);
    qsort(b, m, sizeof(b[0]), compare2);
    int aind=0;
    for(int i=0;i<m&&aind<n;i++) {
        if(b[i][2]>=a[aind][1]) {
            c[a[aind++][0]]=b[i][0]+1;
            b[i][2]=-1;
            i=-1;
        }
    }
    if(aind<n) {
        printf("impossible");
        return 0;
    }
    for(int i=0;i<n;i++) {
        printf("%d ", c[i]);
    }
} 