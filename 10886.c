#include <stdio.h>

int main() {
    int sum=0, psum=0, n, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t) sum++;
        else psum++;
    }
    if(sum>psum) printf("Junhee is cute!");
    else printf("Junhee is not cute!");
    return 0;
}
