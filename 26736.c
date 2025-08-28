#include <stdio.h>

int main() {
    char t[100100];
    int a=0, b=0;
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='A') a++;
        else b++;
    }
    printf("%d : %d", a, b);
    return 0;
}
