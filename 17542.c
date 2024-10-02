#include <stdio.h>
int main() {
    int n, m, t, tmax=-1, ttmax=-1;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(tmax<t) tmax=t;
    }
    for(int j=0;j<m;j++) {
        scanf("%d", &t);
        if(ttmax<t) ttmax=t;
    }
    if(tmax==ttmax) printf("possible");
    else printf("impossible");
}