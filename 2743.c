#include <stdio.h>
int main() {
    char cha[102];
    int t;
    scanf("%s", cha);
    for(t=0;t<=100;t++) {
        if(cha[t]=='\0') break;
    }
    printf("%d", t);
}