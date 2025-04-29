#include <stdio.h>
int main() {
    int a=0, b=0, n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t%2) a++;
        else b++;
    }
    printf("%s", b>a?"Happy":"Sad");
}