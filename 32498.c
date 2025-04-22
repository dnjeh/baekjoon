#include <stdio.h>
int main() {
    int n, cnt=0, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t%2) cnt++;
    }
    printf("%d", cnt);
}