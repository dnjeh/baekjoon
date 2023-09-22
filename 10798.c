#include <stdio.h>
int main() {
    char t[5][20]={{'\0',},};
    int i, j;
    for(i=0;i<5;i++) {
        scanf("%s", t[i]);
    }
    for(i=j=0;j<20;j++) {
        for(i=0;i<5;i++) {
            if(t[i][j]) printf("%c", t[i][j]);
        }
    }
}