#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int n, m, k, team, left;
    scanf("%d %d %d", &n, &m, &k);
    team=min(n/2, m);    
    left=n+m-team*3;
    k-=left;
    if(k>0) printf("%d", (team*3-k)/3);
    else printf("%d", team);
}
