#include <stdio.h>
#include <string.h>
int main() {
    int cnt=0, len, i, f=0;
    char L[11], R[11];
    scanf("%s %s", L, R);
    if((len=strlen(L))!=strlen(R)) {
        printf("0");
        return 0;
    }
    for(i=0;i<len;i++) {
        if(!f&&L[i]==R[i]) {
            if(L[i]=='8') cnt++;
        }
        else f=1;
    }
    printf("%d", cnt);
}