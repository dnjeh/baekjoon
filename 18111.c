#include <stdio.h>
int a[257], b[2][257]; //a는 쌓인 갯수에 대한 누적합
int main() {
    int inv, mimix[2]={-1, 257}, i, j, n, m, t;
    scanf("%d %d %d", &n, &m, &inv);
    for(i=0;i<n*m;i++) {
        scanf("%d", &t);                   
        a[t]++;                          //해당 층계에 미리 있다하기
    }
    for(i=255;i>=0;i--) a[i]+=a[i+1];    //누적합 만들기
    for(i=1;i<=256;i++) {
        b[0][i]=a[i]*2;                  //b[0]은 그 층계까지 부시는데에 얼마나 걸리는지
        b[1][i]=n*m-a[i];                //b[1]은 그 층계까지 쌓는데에 얼마나 걸리는지
        if(i!=1) b[1][i]+=b[1][i-1];     //미리 쌓는 데에 대한 누적합 계산
    }
    for(i=255;i>0;i--) b[0][i]+=b[0][i+1]; //부시는 데에 대한 누적합 계산
    for(i=256;i>=0;i--) {
        if(i==256&&(inv>=b[1][i])) {
            mimix[0]=b[1][i];
            mimix[1]=i;
        }
        else if(mimix[0]==-1&&(b[0][i+1]/2+inv>=b[1][i])) {
            mimix[0]=b[0][i+1]+b[1][i];
            mimix[1]=i;
        }
        else if(!i&&mimix[0]>b[0][i+1]) {
            mimix[0]=b[0][i+1];
            mimix[1]=0;
        }
        else if((mimix[0]>(b[0][i+1]+b[1][i]))&&b[0][i+1]/2+inv>=b[1][i]){
            mimix[0]=b[0][i+1]+b[1][i];
            mimix[1]=i;
        }
    }
    printf("%d %d", *mimix, mimix[1]);
    /*for(i=1;i<=64;i++) {
        printf("%d %d %d\n", a[i], b[0][i], b[1][i]);
    }*/
}