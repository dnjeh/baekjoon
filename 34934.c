#include <stdio.h>
int main() {
    char t[20];
    int n, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s %d", t, &tt);
        if(tt==2026) printf("%s", t);
    }
}