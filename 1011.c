#include <stdio.h> 
long long int sum[50000]; 
void sums() { 
    for(long long int i=0;i<50000;i++) { 
        sum[i]=(i+1)%2?(i+2)/2*(i+1):(i+1)/2*(i+2); 
    } 
} 
int main() { 
    long long int T, x, y, a, now, i, j, cnt; 
    scanf("%lld", &T); 
    sums(); 
    for(i=0;i<T;i++) { 
        now=1; 
        scanf("%lld %lld", &x, &y); a=y-x; 
        if(a==1) {
            printf("1\n");
            continue;
        }
        for(j=0;sum[j]*2<a;j++); cnt=j*2;
        if(a-sum[j-1]*2<=j+1) cnt++;
        else cnt+=2;
        printf("%lld\n", cnt); 
    } 
}
