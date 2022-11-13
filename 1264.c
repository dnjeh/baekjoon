#include <stdio.h>
int main() {
    int t=0, i;
    char str[257]={'\0'};
    for(;;t=0) {
        fgets(str, 257, stdin);
        if(str[0]=='#') {
            return 0;
        }
        for(i=0;i<255;i++) {
            if(str[i]=='\0') {
                break;
            }
            switch(str[i]) {
                case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u': 
                    t++;
                default:
                    break;
            }
        }
        printf("%d\n", t);
    }
}