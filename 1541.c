#include <stdio.h>
int main() {
    int sum=0, f=0, t=0, i;
    char str[51];
    scanf("%s", str);
    for(i=0;str[i];i++) {
        if(str[i]>='0') {
            t*=10;
            t+=str[i]-48;
        }
        else if(str[i]=='-') {
            if(f) sum-=t;
            else sum+=t;
            t=0;
            f=1;
        }
        if(str[i]=='+'||!str[i+1]) {
            if(f) sum-=t;
            else sum+=t;
            t=0;
        }
    }
    printf("%d", sum);
}