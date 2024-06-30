#include <stdio.h>
int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d %d", &a, &b, &c);
        if((a&&c)||(a&&b&&c)) {
            printf("%s", a==c||(c<a&&!((a-c)%2))?"Yes":"No");
        }
        else if(c) {
            printf("No");
        }
        else if(a) {
            printf("%s", a%2?"No":"Yes");
        }
        else if(b) {
            printf("%s", b%2?"No":"Yes");
        }
        printf("\n");
    }
}