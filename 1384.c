#include <stdio.h>
int t=0;
int main() {
    int n, i, j, py=0;
    scanf("%d", &n);
    if(n) {
        printf("Group %d\n", ++t);
        char a[n][61], b[n][n-1];
        for(i=0;i<n;i++) {
            scanf("%s", &a[i]);
            for(j=0;j<n-1;j++) {
                scanf("%c", &b[i][j]);
                if(b[i][j]!='P'&&b[i][j]!='N') {
                    j--;
                }
            }
        }
        for(i=0;i<n;i++) {
            for(j=0;j<n-1;j++) {
                if(b[i][j]=='N') {
                    py=1;
                    printf("%s was nasty about %s\n", a[(i+(n-2)-j+1+n)%n], a[i]);
                }
            }
        }
        if(!py) printf("Nobody was nasty\n");
        printf("\n");
        main();
    }
}