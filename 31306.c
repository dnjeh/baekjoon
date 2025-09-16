#include <stdio.h>
int main() {
    int cnt=0, ycnt=0;
    char t[55];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        switch(t[i]) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cnt++;
            break;
        case 'y':
            ycnt++;
        default:
            break;
        }
    }
    printf("%d %d", cnt, ycnt+cnt);
}