#include <stdio.h>
int main() {
    int k, f=0, ans=0;
    scanf("%d", &k);
    for(;k;k/=10) {
        if(k%10) f=1;
        if(f&&!(k%10)) ans++;
    }
    printf("%d", ans);
}