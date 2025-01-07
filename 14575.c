#include <stdio.h>
int a[2][1000];
int main() {
    int n, T, mm[2]={0, }, se[2]={0, };
    scanf("%d %d", &n, &T);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[j][i]);
            mm[j]+=a[j][i];
            if(se[j]<a[j][i]) se[j]=a[j][i];
        }
    }
    if(mm[0]>T||mm[1]<T) {
        printf("-1");
        return 0;
    }
    for(int mid;se[0]<se[1];) {
        int tsum=0;
        mid=(se[0]+se[1])/2;
        for(int i=0;i<n;i++) {
            if(mid>a[1][i]) tsum+=a[1][i];
            else if(mid>a[0][i]) tsum+=mid;
            else tsum+=a[0][i];
        }
        if(tsum<T) se[0]=mid+1;
        else se[1]=mid;
    } 
    printf("%d", se[0]);
}