#include <stdio.h>
int main() {
    int N, i, j, k, tsum[4]={0, };
    char a[3][4], t;
    scanf("%d", &N);
    for(i=0;i<N;i++) {
        for(j=0;j<3;j++) scanf("%s", a[j]);
        getchar();
        scanf("%c", &t);
        for(j=0;j<4;j++) tsum[j]=0;
        for(j=0;j<3;j++) {
            tsum[0]=tsum[1]=0;
            for(k=0;k<3;k++) {
                if(a[j][k]!='-'&&a[j][k]==t) tsum[0]++;
                if(a[k][j]!='-'&&a[k][j]==t) tsum[1]++;
                if(j==k&&a[j][k]!='-'&&a[j][k]==t) tsum[2]++;
                if(j+k==2&&a[j][k]!='-'&&a[j][k]==t) tsum[3]++;
            }
            if(tsum[0]==2||tsum[1]==2) break;
        }
        if(tsum[0]==2) a[j][0]=a[j][1]=a[j][2]=t;
        else if(tsum[1]==2) a[0][j]=a[1][j]=a[2][j]=t;
        else if(tsum[2]==2) a[0][0]=a[1][1]=a[2][2]=t;
        else if(tsum[3]==2) a[0][2]=a[1][1]=a[2][0]=t; 
        printf("Case %d:\n", i+1);
        for(j=0;j<3;j++) printf("%s\n", a[j]);
    }
}