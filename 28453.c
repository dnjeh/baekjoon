#include <stdio.h>
int fun(int a) {
    return a<250?4:(a<275?3:(a<300?2:1));
}
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        printf("%d ", fun(t));
    }
}