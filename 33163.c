#include <stdio.h>
int main() {
    char t[110];
    int n;
    scanf("%d %s", &n, t);
    for(int i=0;t[i];i++) {
        printf("%c", t[i]=='J'?'O':(t[i]=='O'?'I':'J'));
    }
}