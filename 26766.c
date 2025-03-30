#include <stdio.h>
int drawHeart() {
    char *t[] = {" @@@   @@@ \n","@   @ @   @\n","@    @    @\n","@         @\n"," @       @ \n","  @     @  \n","   @   @   \n","    @ @    \n","     @     \n"};
    for(int i=0;i<9;i++) {
        printf("%s", t[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        drawHeart();
    }
}