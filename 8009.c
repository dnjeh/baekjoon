#include <stdio.h>
#include <string.h>
int a[3][30], aind;
int topay(int from) {
    int ret=from, tcal;
    for(int i=0;i<aind;i++) {
        int a0=a[0][i], a1=a[1][i], a2=a[2][i];
        tcal=from+(a1-a0)*(a2<from/a0?a2:from/a0);
        if(ret>tcal) ret=tcal;
    }
    return ret;
}
int main() {
    int t;
    char hname[30];
    for(fgets(hname, 25, stdin);hname[0]!='#';fgets(hname, 25, stdin)) {
        hname[strlen(hname)-1]=0;
        aind=0;
        for(scanf("%d %d %d", &a[0][aind], &a[1][aind], &a[2][aind]);
            a[0][aind]+a[1][aind]+a[2][aind];
            scanf("%d %d %d", &a[0][aind], &a[1][aind], &a[2][aind])
        ) { aind++; }
        for(scanf("%d", &t);t;scanf("%d", &t)) {
            printf("Stay %d night%s at %s, pay %d.\n", t, t-1?"s":"", hname, topay(t));
        }
        getchar();
    }
}