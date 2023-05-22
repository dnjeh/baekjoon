#include <stdio.h>
int main() {
    int T, t[4], i, j, n, m;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        for(j=0;j<4;j++) scanf("%d", &t[j]);
        for(n=m=0;(t[0]*n+t[2])!=(t[1]*m+t[3]);) {
            if((t[0]*n+t[2])>t[0]*t[1]||(t[1]*m+t[3])>t[0]*t[1]) break;
            if((t[0]*n+t[2])>(t[1]*m+t[3])) {
                m++;
            }
            else {
                n++;
            }
        }  
        if((t[0]*n+t[2])!=(t[1]*m+t[3])) printf("-1\n");
        else printf("%d\n", t[1]*m+t[3]);
    }
}