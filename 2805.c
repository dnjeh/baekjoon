#include <stdio.h>
int a[1000000];
int main() {
    int n, m, i, up, dwn, mid, dap;
    long long int tsum=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(!i||up<a[i]) up=a[i];
    }
    for(dwn=0, mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
        for(tsum=i=0;i<n&&tsum<(long long int)m;i++) {
            if(0<(a[i]-mid)) tsum+=(long long int)(a[i]-mid);
        }
        if(tsum>=(long long int)m) {
            dap=mid;
            dwn=mid+1;
        }
        else {
            up=mid-1;
        }
    }
    printf("%d", dap);
}