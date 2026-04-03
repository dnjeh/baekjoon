#include <stdio.h>
int main() {
    int t, cnt=0;
    for(;scanf("%d", &t)!=EOF;) {
        if(t>0) cnt++;
    }
    printf("%d", cnt);
}