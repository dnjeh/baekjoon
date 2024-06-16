#include <stdio.h>
#include <string.h>
int main() {
    int sum=0;
    char t[1010]={'\0', };
    scanf("%s", t);
    for(int i=0;t[i+3];i++) {
        if(t[i+0]=='D'&&t[i+1]=='K'&&t[i+2]=='S'&&t[i+3]=='H') sum++;
    }
    printf("%d", sum);
}