#include <stdio.h>
int main() {
    char t[15], tt;
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if((!i&&t[i]!='1')||(i&&t[i]-1!=tt)) {
            printf("-1");
            return 0;
        }
        tt=t[i];
    }
    printf("%c", tt);
}