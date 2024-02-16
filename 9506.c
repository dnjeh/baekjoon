#include <stdio.h>
int main() {
    int a[100], _aind, sum;
    int n;
    for(scanf("%d", &n);n!=-1;scanf("%d", &n)) {
        _aind=sum=0;
        for(int i=1;i<n;i++) {
            if(!(n%i)) {
                sum+=i;
                a[_aind++]=i;
            }
        }
        if(sum!=n) {
            printf("%d is NOT perfect.\n", n);
        } 
        else {
            printf("%d = ", n);
            for(int i=0;i<_aind;i++) {
                printf("%d%s", a[i], i+1==_aind?"\n":" + ");
            }
        }
    }   
}