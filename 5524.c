#include <stdio.h>

int main() {
    char t[25];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            printf("%c", t[j]<=90?t[j]+32:t[j]);
        } printf("\n");
    }
    return 0;
}
