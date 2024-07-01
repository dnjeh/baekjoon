#include <stdio.h>
int parseInt(char *a) {
    int ret=0;
    for(int i=0;a[i];i++) {
        ret*=10;
        ret+=a[i]-48;
    }
    return ret;
}
int main() {
    char t[9];
    int a, i;
    for(i=0;i<3;i++) {
        scanf("%s", t);
        if(t[0]!='F'&&t[0]!='B') {
            a=parseInt(t);
            break;
        }
    }
    if(!((a+3-i)%3)&&!((a+3-i)%5)) printf("FizzBuzz");
    else if(!((a+3-i)%3)) printf("Fizz");
    else if(!((a+3-i)%5)) printf("Buzz");
    else printf("%d", a+3-i);
}