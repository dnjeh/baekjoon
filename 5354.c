#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int k=0;k<T;k++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                printf("%c", !i||i+1==n||!j||j+1==n?'#':'J');
            }
            printf("\n");
        }
        if(k+1<T) printf("\n");
    }
}