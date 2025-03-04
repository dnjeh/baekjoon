#include <stdio.h>
int main() {
    char *ans="", t[10];
    scanf("%s", t);
    if(t[0]=='S') ans="HIGHSCHOOL"; 
    else if(t[0]=='C') ans="MASTER"; 
    else if(t[0]=='2') ans="0611"; 
    else if(t[0]=='A') ans="CONTEST"; 
    printf("%s", ans);
}