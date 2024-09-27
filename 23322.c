#include <stdio.h>

int main() {
    int n, k, sum=0, cnt=0, min=0, t;
    scanf("%d %d %d", &n, &k, &min);
    for(int i=1;i<n;i++) {
        scanf("%d", &t);
        if(t>min) {
            sum+=t-min;
            cnt++;
        }
    }
    printf("%d %d", sum, cnt);
    return 0;
}
