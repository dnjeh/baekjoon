#include <stdio.h>
#include <string.h>
int main() {
    int i, c, t;
    char a[30010]={'\0'}, b[30010]={'\0',};
    fgets(a, 30005, stdin);
    scanf("%s", b);
    c=(int)strlen(b);
    for(i=0;a[i]!='\0'&&a[i]!='\n';i++) {
        if(a[i]!=' ') {
            t=(a[i]-b[i%c])+96;
            printf("%c", t>='a'?t:t+26);
        }
        else {
            printf(" ");
        }
    }
}