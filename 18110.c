#include <stdio.h>
#include <math.h>
int main() {
    int a[31]={0, }, n, t, i, j, lim, sum=0;
    double tt;
    scanf("%d", &n);
    if(!n) {
        printf("0");
        return 0;
    }
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    tt=n*(3/20.0); lim=floor(tt+0.5);
    for(j=1, i=0;i<lim;i++) {
        if(a[j]) a[j]--;
        else {
            j++;
            i--;
        }
    }
    for(j=30, i=0;i<lim;i++) {
        if(a[j]) a[j]--;
        else {
            j--;
            i--;
        }
    }
    for(i=1;i<=30;i++) {
        if(a[i]) {
            a[i]--;
            sum+=i--;
        }
    }
    tt=sum/(double)(n-lim*2);
    printf("%d", (int)(floor(tt+0.5)));
}