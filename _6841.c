#include <stdio.h>
int main() {
    char t[6], *tt;
    for(;scanf(" %s", t)!=EOF;) {
        if(t[0]=='C') {
            if(t[1]=='U'&&!t[2]) tt="see you";
            else if(t[1]=='C') tt="Canadian Computing Competition";
            else tt="because";
        }   
        else if(t[1]=='-') {
            if(t[0]==';') tt="wink";
            else if(t[2]==')') tt="I'm happy";
            else if(t[2]=='(') tt="I'm unhappy";
            else tt="stick out my tongue";
        }
        else if(t[2]=='.') {
            tt="sleepy";
        }
        else if(t[0]=='T') {
            if(t[1]=='Y') tt="thank-you";
            else tt="talk to you later";
        }
        else {
            tt="you're welcome";
        }
        printf("%s\n", tt);
    }
}