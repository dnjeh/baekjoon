#include <stdio.h>
#include <string.h>
char a[30][21];
int cnt, b[30], tcnt;
int main() {
    char t[21], tra[21];
    int T, i, n, j, k;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        cnt=0;
        for(j=0;j<30;j++) {
            a[j][0]=0;
            b[j]=0;
        }
        scanf("%d", &n);
        for(j=0;j<n;j++) {
            scanf("%s %s", tra, t);
            for(k=0;k<cnt;k++) {
                if(!strcmp(a[k], t)) break;
            }
            if(k==cnt) {
                b[cnt]++;
                strcpy(a[cnt++], t);
            }
            else b[k]++;
        }
        tcnt=1;
        for(j=0;j<cnt;j++) {
            tcnt*=b[j]+1;
        }
        printf("%d\n", tcnt-1);
    }
}