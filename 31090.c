#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        printf("%s\n", !((n+1)%(n%100))?"Good":"Bye");
    }
}