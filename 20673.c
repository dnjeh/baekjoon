#include <stdio.h>
int main() {
    int p, q;
    scanf("%d %d", &p, &q);
    printf("%s", q>30?"Red":(q<=10&&p<=50?"White":"Yellow"));
}