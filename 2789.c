#include <stdio.h>
int main() {
    int i;
    char a[101]={'\0', };
    scanf("%s", a);
    for(i=0;a[i];i++) {
        switch(a[i]) {
            case 'C': case 'A': case 'M': case 'B': case 'R': case 'I': case 'D': case 'G': case 'E':
                break;
            default:
                printf("%c", a[i]);
                break;
        }
    }
}