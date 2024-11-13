#include <stdio.h>
int fun(char t) {
    return t==')'?1:2;
}
int main() {
    int sum=0, pre=0;
    char t[55];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(!pre||pre!=fun(t[i])) {
            sum+=10;
            pre=fun(t[i]);
        }
        else sum+=5;
    }
    printf("%d", sum);
    return 0;
}
