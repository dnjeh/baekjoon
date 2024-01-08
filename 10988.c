#include <stdio.h>
#include <string.h>
int main() {
    char t[120];
    int i, n;
    scanf("%s", t);
    n=strlen(t);
    for(i=0;i<=(n-i-1);i++) {
        if(t[i]!=t[n-i-1]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
}