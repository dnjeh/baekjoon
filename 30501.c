#include <stdio.h>

int main() {
    int n;
    char t[110];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            if(t[j]=='S') {
                printf("%s", t);
                return 0;
            }
        }
    }
    return 0;
}
