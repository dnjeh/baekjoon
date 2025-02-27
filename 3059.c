#include <stdio.h>
int main() {
    int a[26];
    char t[1010];
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        int tsum=90/2*91-(64/2*65);
        for(int j=0;j<26;j++) {
            a[j]=0;
        }
        scanf(" %s", t);
        for(int j=0;t[j];j++) {
            if(!a[t[j]-'A']) {
                tsum-=t[j];
                a[t[j]-'A']=1;
            }
        }
        printf("%d\n", tsum);
    } 
}