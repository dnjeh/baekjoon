#include <stdio.h>
int a[100][100], vis[100][100], q[10100], let=0, r, c;
int main() {
    int i, j, cnt=0, ind, dind;
    scanf("%d %d", &r, &c);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]) let++;
        }
    }
    for(cnt=0;let;cnt++) {

    }
}