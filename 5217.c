#include <stdio.h>
void fun(int a) {
    printf("Pairs for %d:", a);
    for(int i=1;i<a-i;i++) {
        printf(" %d %d", i, a-i);
        if(i+2<a-i) printf(",");
    }
}
int main() {
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        fun(t);
        printf("\n");
    }
}