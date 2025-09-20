#include <stdio.h>
int main() {
    int ans=0;
    char t[1010];
    scanf("%[^\n]", t);
    for(int i=0;t[i];i++) {
        switch(t[i]) {
        case 'B':
            ans+=2;
            break;
        case 'A': case 'a': case 'b': case 'D': case 'd': case 'e': case 'g': 
        case 'O': case 'o': case 'P': case 'p': case 'Q': case 'q': case 'R': case '@': 
            ans++;
            break;
        
        default:
            break;
        }
    }
    printf("%d", ans);
}