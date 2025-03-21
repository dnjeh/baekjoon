#include <stdio.h>
int main() {
    int n, ans=0;
    char t[55];
    scanf("%d %s", &n, t);
    for(int i=0;t[i];i++) {
        switch(t[i]) { 
            case 'a': case 'i': case 'u': case 'e': case 'o':
            ans++;
            break;
        default:
            break;
        }
    }
    printf("%d", ans);
}