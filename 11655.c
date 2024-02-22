#include <stdio.h>
int main() {
    char t[110];
    fgets(t, 105, stdin);   
    for(int i=0;t[i]!='\n'&&t[i];i++) {
        if(t[i]>='A'&&t[i]<='Z') {
            printf("%c", (t[i]-'A'+13)%26+'A');
        }
        else if(t[i]>='a'&&t[i]<='z') {
            printf("%c", (t[i]-'a'+13)%26+'a');
        }
        else printf("%c", t[i]);
    }
}