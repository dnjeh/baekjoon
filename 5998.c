#include <string.h>
#include <stdio.h>
int main() {
    int n;
    char t[70];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        if(t[strlen(t)-1]%2) printf("odd\n");
        else printf("even\n");
    }
}