#include <stdio.h>
#include <string.h>
int main() {
    int n, m, f=0;
    char a[10010]={'0', }, b[10010]={'0', }, *t;
    scanf("%s %s", a+1, b+1);
    n=strlen(a+1); m=strlen(b+1);
    for(int i=n, j=m;j>=0&&i>=0;i--, j--) {
        if(i>j) t=&a[i];
        else t=&b[i];
        if()
    }
}