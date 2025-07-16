#include <stdio.h>
int main() {
    char t[5];
    int a=0;
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='U') a|=0b1000;
        else if(t[i]=='A') a|=0b100;
        else if(t[i]=='P') a|=0b10;
        else if(t[i]=='C') a|=0b1;
    }
    if(!(a&0b1000)) printf("U");
    if(!(a&0b100)) printf("A");
    if(!(a&0b10)) printf("P");
    if(!(a&0b1)) printf("C");
}