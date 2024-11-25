#include <stdio.h>

int main() {
    int m, t, u, f, d, sum=0, cnt=0;
    char ct[5];
    scanf("%d %d %d %d %d", &m, &t, &u, &f, &d);
    for(int i=0;i<t;i++) {
        scanf("%s", ct);
        if(ct[0]=='f') sum+=f*2;
        else sum+=u+d;
        if(sum>m) {
            printf("%d", cnt);
            return 0;
        }
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}
