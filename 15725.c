#include <stdio.h>
int main() {
    int a=-10001, f=0, ff=0;
    char t[20];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='-') f=1;
        if(t[i]<='9'&&t[i]>='0') {
            if(a==-10001) a=0;
            a*=10;
            a+=t[i]-'0';
        }
        if(t[i]=='x') {
            ff=1;
            break;
        }
    }
    if(a==-10001) a=1;
    if(!ff) printf("0");
    else if(f) printf("%d", a*-1);
    else printf("%d", a);
}