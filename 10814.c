#include <stdio.h>
char a[100001][101];
int b[100000], c[201][2];
int main() {
    int i, n, t;
    scanf("%d", &n);
    for(i=1;i<=n;i++) {
        scanf("%d", &t);
        scanf("%s", &a[i]);
        if(!c[t][0]) {
            c[t][0]=c[t][1]=i;
        }
        else {
            b[c[t][1]]=i;
            c[t][1]=i;
        }
    }
    for(i=1;i<=200;i++) {
        if(c[i][0]) {
            t=b[c[i][0]];
            printf("%d %s\n", i, a[c[i][0]]);
            while(t) {
                printf("%d %s\n", i, a[t]);
                t=b[t];
            }
        }
    }
}