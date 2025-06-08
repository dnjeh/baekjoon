#include <stdio.h>
int main() {
    char t[1000];
    for(;scanf("%[^\n]s", t)!=EOF;) {
        getchar();
        for(int i=0;t[i];i++) {
            switch(t[i]) {
            case 'i':
                t[i]='e';
                break;
            case 'e':
                t[i]='i';
                break;
            case 'I':
                t[i]='E';
                break;
            case 'E':
                t[i]='I';
                break;
            default:
                break;
            }
        }
        printf("%s\n", t);
    }
}