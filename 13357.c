#include <stdio.h>
int main() {
    long long int sum=100, cnt=0, d, new, old=-1;
    scanf("%lld", &d);
    for(int i=0;i<d;i++) {
        scanf("%lld", &new);
        if(old==-1||new<old) {
            sum+=cnt*old;
            cnt=sum/new;
            sum-=cnt*new;
            if(cnt>100000) {
                sum+=(cnt-100000)*new;
                cnt=100000;
            }
        } 
        old=new;
    } 
    sum+=cnt*old;
    printf("%lld", sum);
}