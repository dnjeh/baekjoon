#include <stdio.h>
int main() {
    char t[120];
    for(;fgets(t, 110, stdin);) {
        printf("%s", t);
    }
}