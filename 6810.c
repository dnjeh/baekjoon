#include <stdio.h>
int main() {
    int sum=91, t, i;
    for(i=0;i<3;i++) {
        scanf("%d", &t);
        if(i%2) {
            sum+=t*3;
        }
        else {
            sum+=t;
        }
    }
    printf("The 1-3-sum is %d", sum);
}