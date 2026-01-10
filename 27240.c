#include <stdio.h>
int main() {
    int n, a, b, s, t, f=0, ff=0;
    scanf("%d %d %d %d %d", &n, &a, &b, &s, &t);
    if(s<=a) f=1;
    else if(s<b) f=2;
    if(t<=a) ff=1;
    else if(t<b) ff=2;
    if(f!=ff) printf("Full");
    else if(f==2) printf("City");
    else printf("Outside");
}