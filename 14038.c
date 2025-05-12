#include <stdio.h>
int main() {
    int cnt=0;
    char t[5];
    for(int i=0;i<6;i++) {
        scanf("%s", t);
        if(t[0]=='W') cnt++;
    }
    printf("%d", cnt>4?1:(cnt>2?2:(cnt?3:-1)));
}