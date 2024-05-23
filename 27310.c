#include <stdio.h>

int main() {
    int sum=0;
    char t[35];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        sum++;
        if(t[i]==':') sum++;
        else if(t[i]=='_') sum+=5;
    }
    printf("%d", sum);
    return 0; 
}
