#include <stdio.h>
int a[2][1010];
int main() {
    int T, n;
    long long int tans=0;
    char t; 
    scanf("%d", &T);
    for(int k=0;k<T;k++) {
        tans=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[0][i]);
        }
        for(int i=0;i<n;i++) {
            scanf(" %c", &a[1][i]);
        }
        for(int i=n-1;i>=0;i--) {
            if(a[1][i]=='T'&&tans<0) tans=(long long int)a[0][i];
            else if(a[1][i]=='T') tans=tans+(long long int)a[0][i];
            else tans=tans-(long long int)a[0][i]; 
        }
        printf("%lld\n", tans<0?0:tans);
    }
}