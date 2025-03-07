#include <stdio.h>
int main() {
    int n;
    char *a="";
    scanf("%d", &n);
    if(n>=620) a="Red";
    else if(n>=590) a="Orange";
    else if(n>=570) a="Yellow";
    else if(n>=495) a="Green";
    else if(n>=450) a="Blue";
    else if(n>=425) a="Indigo";
    else if(n>=380) a="Violet";
    printf("%s", a);
}