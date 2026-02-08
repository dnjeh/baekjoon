#include <stdio.h>
int main() {
    int n, t, cnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t!=i+1) cnt++;
    }
    printf("%d", cnt);
}