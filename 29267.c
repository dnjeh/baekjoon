#include <stdio.h>
int main() {
    char t[10];
    int n, k, cnt=0, ocnt=0;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        if(t[0]=='a') cnt+=k;
        else if(t[1]=='a') ocnt=cnt;
        else if(t[1]=='h') cnt=cnt-1>=0?cnt-1:0;
        else cnt=ocnt;
        printf("%d\n", cnt);
    }
}