#include <stdio.h>
int main() {
    int a, b, c, d;
    for(scanf("%d %d %d %d", &a, &b, &c, &d);a+b+c+d; scanf("%d %d %d %d", &a, &b, &c, &d)) {
        if(!a) a=d/b/c;
        else if(!b) b=d/a/c;
        else if(!c) c=d/a/b;
        else d=a*b*c;
        printf("%d %d %d %d\n", a, b, c, d);
    }
}