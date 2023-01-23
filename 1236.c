#include <stdio.h>

int main() {
    int n, m, i, j, sum=0, b[2]={0,};
    scanf("%d %d", &n, &m);
    char a[n][m];
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%c", &a[i][j]);
            if(a[i][j]=='\n') {
                j--;
                continue;
            }
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(a[i][j]=='X') {
                b[0]++;
                break;
            }
        }
    }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            if(a[j][i]=='X') {
                b[1]++;
                break;
            }
        }
    }
    printf("%d", (n-b[0])>=(m-b[1])?(n-b[0]):(m-b[1]));
}