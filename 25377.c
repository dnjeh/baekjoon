#include <stdio.h>
int main() {
    int n, t, tt, min=-1;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if((t<=tt)&&(min==-1||min>tt)) min=tt;
    }
    printf("%d", min);
}