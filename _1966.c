#include <stdio.h>
#include <math.h>
int a[101], b[10];
int main() {
    int T, n, m, i, j, cnt, now=0;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &n, &m);
        now=cnt=0;
        for(j=0;j<10;j++) b[j]=0;
        for(j=0;j<n;j++) {
            scanf("%d", &a[j]);
            if(!b[a[j]]) now+=(int)pow(10, a[j]);
            b[a[j]]++;
        }
        for(;cnt>=0;) for(j=0;j<n;j++) {
            if((now/(int)pow(10, a[j]))==1) {
                cnt++;
                b[a[j]]--;
                if(b[a[j]]<=0) now-=(int)pow(10, a[j]);
                a[j]=0;
                if(j==m) {
                    printf("%d\n", cnt);
                    cnt=-1;
                    break;
                }
            }
        }
    }
}