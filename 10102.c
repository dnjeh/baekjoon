#include <stdio.h>
int main() {
    int n, a=0, b=0;
    char t[20];
    scanf("%d", &n);
    scanf("%s", t);
    for(int i=0;i<n;i++) {
        if(t[i]=='A') a++;
        else b++;
    }
    if(a>b) printf("A");
    else if(a<b) printf("B");
    else printf("Tie");
}