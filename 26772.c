#include <stdio.h>
int main() {
    int n;
    char t[9][15] = {
        " @@@   @@@ ",
        "@   @ @   @",
        "@    @    @",
        "@         @",
        " @       @ ",
        "  @     @  ",
        "   @   @   ",
        "    @ @    ",
        "     @     "
    };
    scanf("%d", &n);
    for(int i=0;i<9;i++) {
        for(int j=0;j<n;j++) {
            printf("%s%c", t[i], j+1<n?' ':'\n');
        }
    }
}