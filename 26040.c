#include <stdio.h>
int main() {
    char a[100100], b[60];
    int c[30];
    scanf("%s\n", a);
    fgets(b, 59, stdin);
    for(int i=0;b[i];i+=2) {
        c[b[i]-'A']=1;
    }
    for(int i=0;a[i];i++) {
        printf("%c", a[i]>='A'&&a[i]<='Z'&&c[a[i]-'A']?a[i]-'A'+'a':a[i]);
    }
}