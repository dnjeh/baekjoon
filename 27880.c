#include <stdio.h>
int main() {
    char t[10];
    int sum=0, it, a;
    for(int i=0;i<4;i++) {
        scanf("%s %d", t, &it);
        if(t[0]=='E') a=21;
        else a=17;
        sum+=it*a;
    }
    printf("%d", sum);
}