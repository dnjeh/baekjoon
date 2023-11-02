#include <stdio.h>

int gett(char t) {
    switch(t) {
        case '(':
            return 2;
            break;
        case '*': case '/':
            return 1;
            break;
        case '+': case '-':
            return 0;
            break;
    }
}
int main() {
    int i, sind=0;
    char t[105], sta[110]={'\0', };
    scanf("%s", t);
    for(i=0;t[i];i++) {
        if(t[i]>=65&&t[i]<=90) printf("%c", t[i]);
        else if(t[i]==')') {
            for(sind--;sind>=0&&sta[sind]!='(';sind--) {
                printf("%c", sta[sind]);
            } 
        }
        else if(!sind||t[i]=='('||sta[sind-1]=='('||gett(t[i])>gett(sta[sind-1])) sta[sind++]=t[i];
        else if(sind) {
            for(;sind&&sta[sind-1]!='('&&gett(t[i])<=gett(sta[sind-1]);sind--)
                printf("%c", sta[sind-1]);
            sta[sind++]=t[i];
        }
    }
    for(sind--;sind>=0;sind--) printf("%c", sta[sind]);
}
