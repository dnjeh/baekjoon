#include <stdio.h>
int n, ans, mem[10001];
void dp(int t) {
    int i;
    for(i=t;i<=ans;i++) {
        if(mem[i-t]&&(!mem[i]||mem[i]>mem[i-t]+1)) {
            mem[i]=mem[i-t]+1;
        } 
    }
}
int main() {
    int i, t;
    mem[0]=1;
    scanf("%d %d", &n, &ans);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        dp(t); 
    } 
    printf("%d", mem[ans]-1);
}