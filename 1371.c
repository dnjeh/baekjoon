#include <stdio.h>
int a[26]={0};
int main() {
    int i, max=0;
    char t;
    for(;scanf("%c", &t)!=EOF;) {
        if(t>='a'&&t<='z') a[t-97]++;
    }
    for(i=0;i<26;i++) {
        if(max<a[i]) max=a[i];
    }
    for(i=0;i<26;i++) {
        if(max==a[i]) {
            printf("%c", i+97);
        }
    }
}