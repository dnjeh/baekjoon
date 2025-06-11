#include <stdio.h>
int scan() {
    int ret=0, t;
    for(int i=0;i<3;i++) {
        ret*=60;
        scanf("%d", &t);
        if(i<2) scanf(" : ");
        ret+=t;
    }
    return ret;
}
int main() {
    int a, b;
    a=scan(); b=scan();
    b-=a;
    if(b<0) b+=60*60*24;
    printf("%d", b);
}