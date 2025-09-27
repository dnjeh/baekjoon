#include <stdio.h>

int main() {
    int a = (int)'A' + 'B' + 'C' + 'D' + 'E' + 'F' + 'G' + 'H' + 'I' + 'J' + 'K' + 'L' + 'M' + 'N' + 'O' + 'P' + 'Q' + 'R' + 'S' + 'T' + 'U' + 'V' + 'W' + 'X' + 'Y' + 'Z';
    char t[30];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        a-=t[i];
    }
    printf("%c", a);
    return 0;
}
