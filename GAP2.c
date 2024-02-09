#include <stdio.h>

int mem[1000000];

int f(int n) {
    if(mem[n]) return mem[n];
    if (n == 0) return 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += f(i);
    }
    mem[n]=sum%13;
    return sum % 13;
}

int main() {
    char ans[] = "rgjgmbuyhbfcx";
    for (int i = 0; i < 13; i++) {
        printf("%d\n", i);
        ans[i] ^= f(13 + i * i * i);
        puts(ans);
    }
    puts(ans);
}