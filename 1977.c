#include <stdio.h>
int isit(int t) {
    int i;
    for(i=1;i<=100;i++) {
        if(t==i*i) return 1;
    }
    return 0;
}
int main() {
    int n, m, i, sum=0, min=10000;
    scanf("%d %d", &n, &m);
    for(i=n;i<=m;i++) {
        if(isit(i)) {
            sum+=i;
            if(min>i) min=i;
        } 
    }
    if(sum) printf("%d\n%d", sum, min);
    else printf("-1");
}