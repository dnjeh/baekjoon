#include <stdio.h>
void swap(int *a, int sta, int end) {
    int t;
    for(int i=sta, j=0;i<end-j;i++, j++) {
        t=a[i];
        a[i]=a[end-j];
        a[end-j]=t;
    }
}
int main() {
    int T, n, a[100], tsum, tmin=0, tmini;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tsum=0;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            scanf("%d", &a[j]);
        }
        for(int j=0;j<n-1;j++) {
            tmin=0;
            for(int jj=j;jj<n;jj++) {
                if(!tmin||tmin>a[jj]) {
                    tmin=a[jj];
                    tmini=jj;
                }
            }
            tsum+=tmini-j+1;
            swap(a, j, tmini);
        }
        printf("Case #%d: %d\n", i+1, tsum);
    }
}