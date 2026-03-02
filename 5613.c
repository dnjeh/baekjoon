#include <stdio.h>
int main() {
    char t=0;
    int now=0, it;
    for(;t!='=';scanf(" %c", &t)) {
        scanf("%d", &it);
        if(t) {
            if(t=='+') now+=it;
            else if(t=='-') now-=it;
            else if(t=='*') now*=it;
            else now/=it;
        }
        else now=it;
    }
    printf("%d", now);
}