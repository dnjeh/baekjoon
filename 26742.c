#include <stdio.h>
char a[1000010];
int main() {
    int b=0, c=0;
    scanf("%s", a);
    for(int i=0;a[i];i++) {
        if(a[i]=='B') b++;
        else c++;
    }
    printf("%d", b/2+c/2);
}