#include <stdio.h>
int main() {
    int T, tans;
    char t[110];
    scanf("%d\n", &T);
    for(int i=0;i<T;i++) {
        scanf("%s", t);
        tans=0;
        for(tans=0;t[tans]&&t[tans]!='D';tans++) {}
        printf("%d\n", tans);
    }
}