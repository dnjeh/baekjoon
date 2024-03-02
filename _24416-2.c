#include <stdio.h>
#define MAX 50
int dp(int n) {
    static int mem[MAX+1]={0, 1, 1};
    if(mem[n]) return mem[n];
    else return mem[n]=mem[n-1]+mem[n-2];
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d", dp(n), n-2);
}