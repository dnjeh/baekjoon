#include <stdio.h>
int main() {
    char t[110];
    int n, ans=0;
    scanf("%d %s", &n, t);
    for(int i=0;t[i];i++) {
        switch(t[i]) {
        case 'j': case 'i': 
            ans+=2;
            break;
        case 'o':
            ans++;
            break;
        default:
            break;
        }
    }
    printf("%d", ans);
}