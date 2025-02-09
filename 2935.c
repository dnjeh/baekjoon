#include <stdio.h>
#include <string.h>
void printz(int t) {
    for(int i=0;i<t;i++)
        printf("0");
} 
int main() {
    char t[110], tt[110], ope;
    int a, b, it;
    scanf("%s\n%c\n%s", t, &ope, tt);
    a=strlen(t);
    b=strlen(tt);
    if(a<b) {
        it=a;
        a=b;
        b=it;
    }
    if(ope=='*') {
        printf("1");
        printz(a+b-2);
    }
    else if(a==b) {
        printf("2");
        printz(a-1);
    }
    else {
        printf("1");
        printz(a-b-1);
        printf("1");  
        printz(b-1);
    }
    return 0;
}
