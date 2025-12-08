#include <stdio.h>
int main() {
    int n, a, b, oa, ob;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a, &b);
        if(i&&(a<oa||b<ob)) {
            printf("no");
            return 0;
        }
        oa=a; ob=b;
    }
    printf("yes");
}