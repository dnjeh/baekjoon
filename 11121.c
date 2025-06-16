#include <stdio.h>
#include <string.h>
int main() {
    int T;
    char t1[130], t2[130];
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%s %s", t1, t2);
        printf("%s\n", strcmp(t1, t2)?"ERROR":"OK");
    }
}