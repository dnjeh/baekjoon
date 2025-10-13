#include <stdio.h>
int main() {
    int n, cnt=0, t;
    scanf("%d", &n);
    for(int i=0;i<3;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &t);
            if(t==7) cnt++;
        }
    }
    printf("%d", cnt==3?777:0);
}