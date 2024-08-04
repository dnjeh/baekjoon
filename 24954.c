#include <stdio.h>
int a[10][10], b[10], c[10], min=-1, n;
void bak(int now, int sum) {
    int t;
    if(now>=n) {
        if(min==-1||min>sum) min=sum;
    }
    else {
        for(int i=0;i<n;i++) {
            if(!c[i]) {
                c[i]=1;
                for(int j=0;j<n;j++) {
                    b[j]-=a[i][j];
                }
                sum+=b[i]<=0?1:b[i];
                bak(now+1, sum);
                sum-=b[i]<=0?1:b[i];
                for(int j=0;j<n;j++) {
                    b[j]+=a[i][j];
                }
                c[i]=0;
            }
        }
    }
    return;
}
int main() {
    int t, tt, ttt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        for(int j=0;j<t;j++) {
            scanf("%d %d", &tt, &ttt);
            a[i][tt-1]=ttt;
        }
    }
    bak(0, 0);
    printf("%d", min);
}