#include <stdio.h>
int main() {
    int p, r;
    scanf("%d %d", &p, &r);
    double v=p/(double)r;
    if(v<0.2) printf("weak");
    else if(v<0.4) printf("normal");
    else if(v<0.6) printf("strong");
    else printf("very strong");
}