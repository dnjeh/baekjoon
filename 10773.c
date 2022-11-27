#include <stdio.h>
int t[100000]={0};
int main() {
    int i, k, sum=0, now=0;
    scanf("%d", &k);    
    for(i=0;i<k;i++) {
        scanf("%d", &t[now]);
        if(!t[now]) {
            sum-=t[--now];
        }
        else {
            sum+=t[now++];
        }
    }
    printf("%d", sum);
}