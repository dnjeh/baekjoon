#include <stdio.h>
int main() {
    char a[26]={'\0', }, t[101];
    int i, j, T, sum=0;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", t);
        for(j=0;t[j]!='\0';j++) {
            if(!a[t[j]-97]||t[j-1]==t[j]) {
                a[t[j]-97]=1;
                if(t[j+1]=='\0') sum++;
            }
            else {
                break;
            }
        }
        for(j=0;j<26;j++) {
            a[j]=0;
        }
    }
    printf("%d", sum);
}