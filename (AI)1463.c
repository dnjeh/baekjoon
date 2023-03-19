#include <stdio.h>
#include <stdlib.h>

#define MAX_N 1000000

int memo[MAX_N + 1];

int min(int a, int b) {
    return (a < b) ? a : b;
}

int f(int n) {
    if (n == 1) {
        return 0;
    }
    if (memo[n] != -1) {
        return memo[n];
    }
    int res;
    if (n % 2 == 0 && n % 3 == 0) {
        res = 1 + min(min(f(n/2), f(n/3)), f(n-1));
    } else if (n % 2 == 0) {
        res = 1 + min(f(n/2), f(n-1));
    } else if (n % 3 == 0) {
        res = 1 + min(f(n/3), f(n-1));
    } else {
        res = 1 + f(n-1);
    }
    memo[n] = res;
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= MAX_N; i++) {
        memo[i] = -1;
    }
    printf("%d\n", f(n));
    return 0;
}
