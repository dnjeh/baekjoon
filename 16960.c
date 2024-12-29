#include <stdio.h>
int a[2000][2001];
int main() {
    int b[2001]={0, }, n, m, tm, t;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i][0]);
        for(int j=1;j<=a[i][0];j++) {
            scanf("%d", &a[i][j]);
            b[a[i][j]]++;
        }
    }
    for(int i=0;i<n;i++) {
        int f=0;
        for(int j=1;j<=a[i][0];j++) {
            b[a[i][j]]--;
            if(!b[a[i][j]]) f=1;
            b[a[i][j]]++;
        }
        if(!f) {
            printf("1");
            return 0;
        }
    }
    printf("0");
}