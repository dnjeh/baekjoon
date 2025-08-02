#include <stdio.h>
#include <string.h>

int main() {
    int max=0, it;
    char t[30], cmax[30];
    for(int i=0;i<7;i++) {
        scanf("%s %d", t, &it);
        if(!i||it>max) {
            strcpy(cmax, t);
            max=it;
        }
    }
    printf("%s", cmax);
    return 0;
}
