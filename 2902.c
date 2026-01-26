#include <stdio.h>
int main() {
    char t[110];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(!i||t[i-1]=='-') printf("%c", t[i]);
    }
}