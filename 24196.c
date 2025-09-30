#include <stdio.h>
#include <string.h>
int main() {
    char t[60];
    scanf("%s", t);
    for(int i=0;i<strlen(t);i+=t[i]-'A'+1) {
        printf("%c", t[i]);
    }
}