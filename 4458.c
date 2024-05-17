#include <stdio.h>

int main() {
    int T;
    char t[35];
    scanf("%d\n", &T);
    for(int i=0;i<T;i++) {
        fgets(t, 33, stdin);
        if(t[0]>90) t[0]-=32;
        printf("%s", t);
    }
    return 0;
}
