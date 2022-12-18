#include <stdio.h>
int main() {
    int sum=0, i;
    char t;
    for(;scanf("%c", &t)!=EOF;) {
        if(t=='\n') continue;
        if(t>'Z') {
            sum+=t-96;
        }
        else {
            sum+=t-64+26;
        }
    }
    for(i=2;i<sum;i++) {
        if(!(sum%i)) {
            printf("It is not a prime word.");
            return 0;
        }
    }
    printf("It is a prime word.");
}