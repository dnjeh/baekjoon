#include <stdio.h>
int main() {
    int i, now=0, a[100];
    char s[105]; 
    fgets(s, 103, stdin);
    for(;s[0]!='.'||s[1]!='\n';) {
        now=0;
        for(i=0;s[i]!='.'&&i<101;i++) {
            if(s[i]=='(') {
                a[now++]=0;
            }
            else if(s[i]=='[') {
                a[now++]=1;
            }
            else if(s[i]==')') {
                if(!now) {
                    printf("no\n");
                    break;
                }
                else if(a[--now]) {
                    printf("no\n");
                    break;
                }
            }
            else if(s[i]==']') {
                if(!now) {
                    printf("no\n");
                    break;
                }
                else if(!a[--now]) {
                    printf("no\n");
                    break;
                }
            }
        }
        if(s[i]=='.'||i==101) printf(now?"no\n":"yes\n");
        fgets(s, 103, stdin);
    }
}