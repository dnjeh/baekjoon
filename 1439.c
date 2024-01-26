#include <stdio.h>
int main() {
    int cnt=0;
    char t, bef=0;
    for(;scanf("%c", &t)!=EOF&&t!='\n';) {
        if(bef&&bef!=t) {
            cnt++;
        }
        bef=t;
    } 
    printf("%d", cnt/2+cnt%2);
}