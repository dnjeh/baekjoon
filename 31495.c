#include <stdio.h>
#include <string.h>
int main() {
    char a[55];
    scanf("%[^\n]s", a);
    if(a[0]=='\"'&&a[strlen(a)-1]=='\"'&&strlen(a)>2) {
        a[strlen(a)-1]=0;
        printf("%s", a+1);
    }
    else printf("CE");
}