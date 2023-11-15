#include <stdio.h>
int main() {
    int max, min, i, t, sum=0;
    for(i=0;i<3;i++) {
        scanf("%d", &t);
        if(!i||min>t) min=t;
        if(!i||max<t) max=t;
        sum+=t;
    }
    printf("%d", sum-max-min);
}
