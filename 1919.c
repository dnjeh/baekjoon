#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[26][2]={0,}, i, j, sum=0;
    char t[1001]={'\0',};
    for(i=0;i<2;i++) {
        scanf("%s", t);
        for(j=0;t[j]!='\0';j++) {
            a[t[j]-97][i]++;
        }
    }
    for(i=0;i<26;i++) {
        if(a[i][0]!=a[i][1]) {
            sum+=abs(a[i][0]-a[i][1]);
        }
    }
    printf("%d", sum);
}