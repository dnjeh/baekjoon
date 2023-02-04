#include <stdio.h>
#include <math.h>
int a[8001];
int main() {
    int N, i, t, b[4]={0, -4001, }, mm[2], mmax[3]={0, 0, -4001}, cnt=-1;
    double f;
    scanf("%d", &N);
    for(i=0;i<N;i++) {
        scanf("%d", &t);
        a[t+4000]++;
        if(!i||t>*mm) *mm=t;
        if(!i||t<mm[1]) mm[1]=t;
    }
    for(i=8000;i>=0;i--) {
        if(*mmax<=a[i]) {
            *mmax=a[i];
            mmax[1]=i-4000;
        }
    }
    for(i=0;i<=8000;i++) {
        if(mmax[0]==a[i]&&i-4000!=mmax[1]&&mmax[2]==-4001) {
            mmax[2]=i-4000;
        }
        if(a[i]) {
            *b+=i-4000;
            cnt++;
        }
        if(((N-1)/2)==cnt&&b[1]==-4001) {
            b[1]=(i-4000); 
        }
        if(a[i]) {
            a[i--]--;
        }
    }
    f=b[0]/(double)N+0.5;
    if(mmax[2]!=-4001) b[2]=mmax[2];
    else b[2]=mmax[1];
    b[3]=*mm-mm[1];
    printf("%.0lf\n", floor(f));
    for(i=1;i<4;i++) printf("%d\n", b[i]);
}