#include <stdio.h>
int main() {
    int T, cnt=0, t;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("\nD-%d", &t);
        if(t<=90) cnt++;
    }
    printf("%d", cnt);
}