#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int br, bc, dr, dc, jr, jc;
    scanf("%d %d %d %d %d %d", &dr, &dc, &br, &bc, &jr, &jc);
    if(abs(jr-br)+abs(jc-bc)>abs(jr-dr)+abs(jc-dc)-min(abs(jr-dr),abs(jc-dc))) printf("bessie");
    else if(abs(jr-br)+abs(jc-bc)<abs(jr-dr)+abs(jc-dc)-min(abs(jr-dr),abs(jc-dc))) printf("daisy");
    else printf("tie");
}
