#include <stdio.h>

int main() {
    int n;
    char t[110];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            if(!j||j&&t[j]!=t[j-1]) printf("%c", t[j]);
        }
        printf("\n");
    }
    return 0;
}
