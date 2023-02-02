#include <stdio.h>
int main() {
    int n, a, p, i, t=0;
    scanf("%d %d %d", &n, &a, &p);
    int b[n];
    for(i=0;i<n;i++) b[i]=0;
    for(i=0;i<n;i++) scanf("%d", &b[i]);
    for(i=0;i<n;i++) {
        if(b[i]==a) {
            if(!t) t=i+1;
            if(i+1!=n&&b[i+1]<a) {
                printf("%d", t);
                return 0;
            }
        }
        else if(b[i]<a) {
            printf("%d", i+1);
            return 0;
        }
    }
    if(p>n) printf("%d", t?t:i+1);
    else printf("-1");
}