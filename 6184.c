#include <stdio.h>
int a[1000001], am[50000], mind=1;
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int n, m, d, l, t, cnt=0;
    scanf("%d %d %d %d", &n, &m, &d, &l);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for(int i=1;i<=1000000;i++) {
        if(a[i]) for(int j=0;j<mind&&j<m;j++) {
            if((t=max(i-(am[j]*d), 0))>=l) {
                if(!(am[j]++)) mind++;
                a[i--]--;
                cnt++;
                break;
            }
        }
    }
    printf("%d", cnt);
}