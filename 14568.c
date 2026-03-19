#include <stdio.h>

int main() {
    int n, ans=0;
    scanf("%d", &n);
    for(int i=1;i<n;i++) for(int j=1;j<n;j++) for(int k=1;k<n;k++) {
        if(i+j+k!=n) continue;
        if(i<j+2) continue;
        if(k%2) continue;
        ans++;
    }
    printf("%d", ans);
    return 0;
}
