#include <stdio.h>
int main() {
    int T, t;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &t);
        printf("%s\n", t%25<17?"ONLINE":"OFFLINE");
    }
}