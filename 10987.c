#include <stdio.h>
int main() {
    int cnt=0;
    char t[110];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        switch(t[i]) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cnt++;
            break;
        default:
            break;
        }
    }
    printf("%d", cnt);
}