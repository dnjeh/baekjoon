#include <stdio.h>
int main() {
    int n, m, cnt=0, tsum;
    char t[103];
    scanf("%d %d\n", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        tsum=0;
        for(int j=0;j<m;j++) {
            if(t[j]=='O') tsum++;
        }
        if(tsum>m/2) cnt++;
    }
    printf("%d", cnt);
}