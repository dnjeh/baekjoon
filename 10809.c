#include <stdio.h>
int main() {
    int alp[26], i;
    char a[102];
    for(i=0;i<26;i++) {
        alp[i]=-1;
    }
    scanf("%s", a);
    for(i=0;i<100&&a[i]!='\0';i++) {
        if(alp[a[i]-97]==-1) alp[a[i]-97]=i;
    }
    for(i=0;i<26;i++) {
        printf("%d ", alp[i]);
    }
}