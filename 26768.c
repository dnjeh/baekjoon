#include <stdio.h>
int main() {
    char t[1000100];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        switch(t[i]) {
            case 'a':
                t[i]='4';
                break;
            case 'e':
                t[i]='3';
                break;
            case 'i':
                t[i]='1';
                break;
            case 'o':
                t[i]='0';
                break;
            case 's':
                t[i]='5';
                break;
            default:
                break;
        }
    }
    printf("%s", t);
}