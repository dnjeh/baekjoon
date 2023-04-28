#include <stdio.h>
int a[1000], cntnum[2][1000]; //a는 원본, cntnum[0]는 담은 상자 갯수, cntnum[1]은 가장 겉 상자의 크기
int main() {
    int i, j, n, max;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);    
        if(i) for(j=0;j<i;j++) {
            if(a[j]<a[i]&&cntnum[0][i]<=cntnum[0][j]) {
                cntnum[0][i]=cntnum[0][j]+1;
                cntnum[1][i]=a[j];
            }
            if(a[j]>=a[i]&&a[i]>cntnum[1][j]&&cntnum[0][i]<=cntnum[0][j]) {
                cntnum[0][i]=cntnum[0][j];
                cntnum[1][i]=cntnum[1][j];
            }
        }
        if(!i||cntnum[0][i]>max) max=cntnum[0][i];
    }
    printf("%d", max+1);
}