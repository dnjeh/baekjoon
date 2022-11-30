#include <stdio.h>
int main() {
    int i, sum=0, T, t[2]={0};
    scanf("%d %d", &sum, &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &t[0], &t[1]);
        sum-=t[0]*t[1];
    }
    if(!sum) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}