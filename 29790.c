#include <stdio.h>
int main() {
    int n, u, l;
    scanf("%d %d %d", &n, &u, &l);
    printf("%s", n>=1000?u>=8000||l>=260?"Very Good":"Good":"Bad");
}