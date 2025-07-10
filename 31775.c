#include <stdio.h>
int main() {
    int a=0;
    char t[25];
    for(int i=0;i<3;i++) {
        scanf("%s", t);
        if(t[0]=='k') a|=1;
        else if(t[0]=='l') a|=2;
        else if(t[0]=='p') a|=4;
    }
    printf("%s", a==0b111?"GLOBAL":"PONIX");
}