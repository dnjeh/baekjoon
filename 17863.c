#include <stdio.h>
int main() {
    char t[8];
    scanf("%s", t);
    if(t[0]==t[1]&&t[1]==t[2]&&t[2]=='5') printf("YES");
    else printf("NO");
}
