#include <stdio.h>
int main() {
    int t, max, min, sum=0;
    for(int i=0;i<3;i++) {
        scanf("%d", &t);
        sum+=t;
        if(!i||max<t) max=t;
        if(!i||min>t) min=t;
    }
    sum-=max+min;
    if(max-sum==sum-min) printf("%d", max+sum-min);
    else if(max-sum>sum-min) printf("%d", sum+sum-min);
    else printf("%d", min+max-sum);
}