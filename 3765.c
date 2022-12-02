#include <stdio.h>
int main() {
    char t[9];
    for(;fgets(t, 8, stdin)!=NULL;) {
        printf("%s", t);
    }
}