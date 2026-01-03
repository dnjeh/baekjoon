#include <stdio.h>
int main() {
    char t[10];
    scanf("%s", t);
    if(t[0]=='F') printf("Foundation");
    else if(t[0]=='C') printf("Claves");
    else if(t[0]=='V') printf("Veritas");
    else printf("Exploration");
}