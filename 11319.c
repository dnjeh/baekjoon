#include <stdio.h>

int main() {
    char t[1010];
    int n, tcnt, ttcnt;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        tcnt=ttcnt=0;
        scanf("%[^\n]s", t);
        for(int j=0;t[j];j++) {
            switch(t[j]) {
                case 'A': case 'E': case 'I': case 'O': case 'U': 
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    tcnt++;
                    break;
                case ' ':
                    break;
                default:
                    ttcnt++;
            }
        }
        getchar();
        printf("%d %d\n", ttcnt, tcnt);
    }
    return 0;
}
