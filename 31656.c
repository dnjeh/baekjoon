#include <stdio.h>
int main() {
    char t[1010];
    scanf("%[^\n]s", t);
    for(int i=0;t[i];i++) {
        if(!i||(i&&t[i]!=t[i-1])) printf("%c", t[i]);
    }
}