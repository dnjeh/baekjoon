#include <stdio.h>
char a[100][101];
int main() {
    int n, t;
    scanf("%d ", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s", a[i]);
    }
    scanf(" %d", &t);
    if(t==1) {
        for(int i=0;i<n;i++) {
            printf("%s\n", a[i]);
        }
    }
    else if(t==2) {
        for(int i=0;i<n;i++) {
            for(int j=n-1;j>=0;j--) {
                printf("%c", a[i][j]);
            }
            printf("\n");
        }
    }
    else {
        for(int i=n-1;i>=0;i--) {
            printf("%s\n", a[i]);
        }
    }
}