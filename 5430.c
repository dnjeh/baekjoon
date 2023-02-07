#include <stdio.h>
char t[100001];
int a[100000];
int main() {
    char tra;
    int T, f, l, i, j, _n, tt, len;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", t);
        scanf("%d", &_n);
        f=0; l=_n?_n-1:_n; len=_n;
        scanf("%c", &tra);
        scanf("%c", &tra);
        for(j=0;j<_n;j++) {
            scanf("%d", &a[j]);
            scanf("%c", &tra);
        }
        scanf("%c", &tra);
        if(!_n) scanf("%c", &tra);
        for(j=0;t[j];j++) {
            if(t[j]=='R') {
                tt=f; f=l; l=tt;
            }
            else {
                if(len<=0) break;
                else if(f>l) f--;
                else f++;
                len--;
            }
        }
        if(t[j]) printf("error\n");
        else {
            printf("[");
            if(!len) {
                printf("]\n");
                continue;
            }
            else if(f<l) for(j=f;j<l;j++) printf("%d,", a[j]);
            else for(j=f;j>l;j--) printf("%d,", a[j]);
            printf("%d]\n", a[j]);
        }
    }
}