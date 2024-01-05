#include <stdio.h>
#include <string.h>
int main() {
    char t[1010];
    int i;
    for(fgets(t, 1005, stdin);strcmp(t, "END\n")&&strcmp(t, "END");fgets(t, 1005, stdin)) {
        if(t[strlen(t)-1]=='\n') t[strlen(t)-1]=0;
        for(i=strlen(t)-1;i>=0;i--) {
            printf("%c", t[i]);
        }
        printf("\n");
    }
}