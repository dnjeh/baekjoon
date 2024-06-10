#include <stdio.h>
#include <string.h>

int main() {
    char t[10];
    scanf("%s", t);
    if(!strcmp(t, "fdsajkl;")||!strcmp(t, "jkl;fdsa")) printf("in-out");
    else if(!strcmp(t, "asdf;lkj")||!strcmp(t, ";lkjasdf")) printf("out-in");
    else if(!strcmp(t, "asdfjkl;")) printf("stairs");
    else if(!strcmp(t, ";lkjfdsa")) printf("reverse");
    else printf("molu");
    return 0;
}
