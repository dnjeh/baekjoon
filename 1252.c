#include <stdio.h>
#include <string.h>
int main() {
    int sum[90]={0, };
    int i, j, b[2][2]={{-1, }, {-1, } }, i1, j1, f=0, zf=0;
    char a[2][90];
    for(i=0;i<2;i++) {
        scanf("%s", a[i]);
        for(j=0;j<90&&a[i][j];j++) {
            if(b[i][0]==-1&&a[i][j]=='1') b[i][0]=j;
        }
        b[i][1]=j-1;
        if(b[i][0]<0) {
            b[i][0]=0;
            b[i][1]=0;
            zf++;
        }
    }
    if(zf>1) {
        printf("0");
        return 0;
    }
    for(i1=b[0][1], j1=b[1][1], i=0;i<90&&i1>=b[0][0]||j1>=b[1][0];i++) {
        if(i1>=0&&i1<90&&j1>=0&&j1<90&&a[0][i1]=='1'&&a[1][j1]=='1') {
            sum[i]=2;
        }
        else if((i1>=0&&i1<90&&a[0][i1]=='1')||(j1>=0&&j1<90&&a[1][j1]=='1')) {
            sum[i]=1;
        }
        else sum[i]=0;
        i1--; j1--;
        if(i1<b[0][0]) i1=-1;
        if(j1<b[1][0]) j1=-1;
    }
    for(j=0;j<90&&j<i;j++) {
        if(sum[j]>1) {
            sum[j]-=2;
            sum[j+1]++;
        }
    }
    if(sum[i]) printf("1"); 
    for(j=i-1;j<90&&j>=0;j--) {
        printf("%d", sum[j]);
    }
}