#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char t[1010];
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%[^\n]s", t);
        getchar();
        printf("%s", t);
        if(t[strlen(t)-1]!='.') printf(".");
        printf("\n");
    }
    return 0;
}
