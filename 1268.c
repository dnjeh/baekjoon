#include <stdio.h>
int main() {
    int n, i, j, i1, max[2]={0, };
    scanf("%d", &n);
    int a[n][6];
    for(i=0;i<n;i++) {
        for(j=0;j<6;j++) {
            a[i][j]=0;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<5;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0;i<n;i++) {
        for(i1=i;i1<n;i1++) {
            if(i==i1) continue;
            for(j=0;j<5;j++) {
                if(a[i][j]==a[i1][j]) {
                    a[i][5]++;
                    a[i1][5]++;
                    break;
                }
            }
        }
    }
    for(i=0;i<n;i++) {
        if(max[0]<a[i][5]) {
            max[0]=a[i][5];
            max[1]=i;
        }
    }
    printf("%d", max[1]+1);
}