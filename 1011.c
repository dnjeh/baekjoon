#include <stdio.h>
unsigned int sum[50000];
void sums() {
    for(int i=0;i<50000;i++) {
        sum[i]=(i+1)%2?(i+2)/2*(i+1):(i+1)/2*(i+2);
    }
}
int main() {
    unsigned int T, x, y, a, now, i, j, cnt;
    scanf("%d", &T);
    sums(); printf("%d", sum[10]);
    for(i=0;i<T;i++) {
        now=1; 
        scanf("%d %d", &x, &y); a=y-x; 
        if(a==1) {
            printf("1");
            continue;
        }
        for(j=0;sum[j]*2<a;j++); cnt=j*2;
        if(a-sum[j-1]*2<=j) cnt++;
        else cnt+=2;
        printf("%d\n", cnt); 
    }
}