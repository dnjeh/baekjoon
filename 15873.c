#include <stdio.h>
#include <string.h>
int main() {
    char s[5];
    int a, b;
    scanf("%s", s);
    if(strlen(s)==2) {
        a=s[0]-48;
        b=s[1]-48;
    }
    else if(strlen(s)==3) {
        if(s[1]=='0') {
            a=10;
            b=s[2]-48;
        }
        else {
            a=s[0]-48;
            b=10;
        }
    }
    else {
        a=10;
        b=10;
    }
    printf("%d", a+b);
}
