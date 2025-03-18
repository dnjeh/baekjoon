#include <stdio.h>
int main() {
    char a, *ans;
    scanf("%c", &a);
    switch(a) {
        case 'M': ans="MatKor"; break;
        case 'W': ans="WiCys"; break;
        case 'C': ans="CyKor"; break;
        case 'A': ans="AlKor"; break;
        case '$': ans="$clear"; break;
        default:
            break;
    }
    printf("%s", ans);
}