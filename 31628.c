#include <stdio.h>
#include <string.h>
int main() {
    char t[10], f[11][10]={{'\0', }, };
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            scanf("%s", t);
            if(!i) strcpy(f[j], t);
            else if(strcmp(f[j], t)) strcpy(f[j], "");
            else if(i==9) {
                printf("1");
                return 0;
            }
            if(!j) strcpy(f[10], t);
            else if(strcmp(f[10], t)) strcpy(f[10], "");
            else if(j==9) {
                printf("1");
                return 0;
            }
        }
    }
    printf("0");
}