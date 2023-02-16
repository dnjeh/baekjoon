#include <stdio.h>
int boo[2500];
char s[2503], tr[503];
int main() {
    int i, a=0, cnt=0;
    fgets(s, 2502, stdin);
    fgets(tr, 2502, stdin);
    for(i=0;i<2503&&s[i]!='\n';i++) {
        if(s[i]==tr[0]) boo[i]=1;
    }
    
    printf("%d", cnt);
}