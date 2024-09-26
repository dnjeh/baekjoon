#include <stdio.h>

int main() {
    long long int a[110]={0, }, b[110];
    long long int n, e, k, ind=0, f, t;
    scanf("%lld %lld", &n, &e);
    for(long long int i=0;i<e;i++) {
        f=0;
        scanf("%lld", &k);
        for(long long int j=0;j<k;j++) {
            scanf("%lld", &b[j]);
            b[j]--;
            if(!b[j]) f=1;
        }
        if(f) {
            ind++;
            for(long long int j=0;j<k;j++) {
                a[b[j]]|=1LL<<(ind-1);
            }   
        }
        else {
            t=0;
            for(long long int j=0;j<k;j++) {
                t|=a[b[j]];
            }
            for(long long int j=0;j<k;j++) {
                a[b[j]]=t;
            }
        }
    }
    for(long long int i=0;i<n;i++) {
        //printf("%llx\n", a[i]); 
        if(a[i]==((1LL<<ind)-1LL)) printf("%lld\n", i+1);
    }
    
}
