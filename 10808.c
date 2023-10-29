#include <stdio.h>
int a[26];
int main() {
    int i;
    char t[110];
    scanf("%s", t);
    for(i=0;t[i];i++) {
        a[t[i]-97]++;
    }
    for(i=0;i<26;i++) {
        printf("%d ", a[i]);
    }
}