#include <stdio.h>
int main() {
    char t;
    for(scanf("%c", &t);t!='\n';scanf("%c", &t)) {
        printf("%c", t-(97-65));
    }
}