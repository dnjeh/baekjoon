#include <stdio.h>
#define MAX 50
int fib(int n, int* cnt) {
    if(n==1||n==2) {
        (*cnt)++;
        return 1;
    }
    else return fib(n-1, cnt)+fib(n-2, cnt);
}
int fibonacci(int n, int* cnt) {
    int f[MAX]={1, 1};
    for(int i=2;i<n;i++) {
        (*cnt)++;
        f[i]=f[i-1]+f[i-2];
    }
    return f[n-1];
}
int wrap(int n, int(*pf)(int, int*)) {
    int cnt=0;
    pf(n, &cnt);
    return cnt;
}
int main() {
    int n, cnt;
    scanf("%d", &n);
    printf("%d %d", wrap(n, fib), wrap(n, fibonacci));
}