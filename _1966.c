#include <stdio.h>
#include <stdlib.h>
int com(const void* _t, const void* _tt) {
    if (*(int*)_t<*(int*)_tt) return 1;
    else if (*(int*)_t>*(int*)_tt) return -1;
    else return 0;
}
int a[100], b[100];
int main() {
    int T, t, n, max[2]={0, }, i, j, m, cnt=1;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &n, &m);
        t=max[0]=max[1]=0;
        cnt=1;
        for(j=0;j<n;j++) {
            scanf("%d", &a[j]);
            b[j]=a[j];
        }
        for(j=m-1;a[(j+n)%n]>a[m];j--) {
            if(a[m]==a[(j+n)%n]) t++;
        }
        qsort(b, n, sizeof(int), com);
        for(j=0;j<n;j++) {
            if(a[j]==a[m]) t--;
            if(!t) {
                printf("%d\n", j+1);
                break;
            }
        }
        
    } 
}