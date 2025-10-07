#include <stdio.h>
int main() {
    int n, t, min, mini;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i||min>t) {
            min=t;
            mini=i;
        }
    }
    printf("%d", mini);
}