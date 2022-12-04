#include <stdio.h>
int main() {
    int a[26]={0}, T, i, cnt=0;
    char t[31];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", t);
        a[t[0]-97]++;
    }
    for(i=0;i<26;i++) {
        if(a[i]>=5) {
            printf("%c", i+97);
            cnt++;
        }
    }
    if(!cnt) {
        printf("PREDAJA");
    }
}