#include <stdio.h>
int main() {
    int i, j, n;
    char a[51]={'\0',}, t[51]={'\0',};
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(j=0;t[j]!='\0';j++) {
            if(!a[j]||a[j]==t[j]) {
                a[j]=t[j];
            }
            else {
                a[j]='\n';
            }
        }
    }
    for(j=0;a[j]!='\0';j++) {
        if(a[j]=='\n') printf("?");
        else printf("%c", a[j]);
    }
}