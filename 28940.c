#include <stdio.h>
int main() {
    int w, h, n, a, b;
    scanf("%d %d %d %d %d", &w, &h, &n, &a, &b);
    if(w<a||h<b) printf("-1"); 
    else printf("%d", n/((w/a)*(h/b))+(n%((w/a)*(h/b))?1:0));
}