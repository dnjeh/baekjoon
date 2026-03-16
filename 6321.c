#include <stdio.h>

int main() {
    char t[55];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        printf("String #%d\n", i+1);
        for(int j=0;t[j];j++) {
            printf("%c", (t[j]-'A'+1)%26+'A');
        }
        printf("%s", i+1<n?"\n\n":"\n");
    }
    return 0;
}
