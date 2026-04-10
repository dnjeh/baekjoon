#include <stdio.h>
#include <string.h>
int main() {
    char t[90];
    for(scanf("%[^\n]s", t);strcmp(t, "***");scanf("%[^\n]s", t)) {
        for(int i=strlen(t)-1;i>=0;i--) {
            printf("%c", t[i]);
        }
        printf("\n");
        getchar();
    }
    return 0;
}
