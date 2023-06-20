#include <stdio.h>
int main() {
    int T, i, j;
    char t[21];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", t);
        for(j=0;t[j];j++);
        if(j<6||j>9) printf("no\n");
        else printf("yes\n");
    }
}