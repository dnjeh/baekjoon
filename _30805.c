#include <stdio.h>
int main() {
    int n, m, a[110], b[110], c[110], tmaxi, tmaxj, maxi=-1, maxj=-1, max=0, k, i, j;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    for(int i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    for(k=0, maxi=-1, maxj=-1;maxi+1<n&&maxj+1<m;k++) {
        for(i=maxi+1;i<n;i++) {
            for(j=maxj+1;j<m;j++) {
                if(a[i]==b[j]&&max<a[i]) {
                    tmaxi=i;
                    tmaxj=j;
                    max=a[i];
                }
            }
        }
        if(max==-1) break;
        maxi=tmaxi;
        maxj=tmaxj;
        c[k]=max;
        max=-1;
    }
    printf("%d\n", k);
    for(int i=0;i<k;i++) {
        printf("%d ", c[i]);
    }
}