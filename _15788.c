#include <stdio.h>
int main() {
    long long int N, i, j, t=0, sum[2]={-1, -1}, f=0;
    scanf("%lld", &N);
    long long int a[2][N], b[2]={0, };
    for(i=0;i<N;i++) for(j=0;j<2;j++) a[j][i]=0;
    for(i=0;i<N;i++) {
        for(j=0;j<N;j++) {
            scanf("%lld", &t);
            a[0][i]+=t;
            a[1][j]+=t;
            if(i==j) b[0]+=t;
            if(i+j==(N-1)) b[1]+=t;
        }
    }
    for(i=0;i<N;i++) {
        if(a[0][i]!=sum[0]&&sum[0]!=-1&&a[0][i]!=sum[1]&&sum[1]!=-1) f=1;
        else if(sum[0]==-1||a[0][i]==sum[0]) sum[0]=a[0][i];
        else sum[1]=a[0][i];
        if(a[1][i]!=sum[0]&&sum[0]!=-1&&a[1][i]!=sum[1]&&sum[1]!=-1) f=1;
        else if(sum[0]==-1||a[1][i]==sum[0]) sum[0]=a[1][i];
        else sum[1]=a[1][i];
    }
    if(b[0]!=sum[0]&&sum[0]!=-1&&b[0]!=sum[1]&&sum[1]!=-1) f=1;
    else if(sum[0]==-1||b[0]==sum[0]) sum[0]=b[0];
    else sum[1]=b[0];
    if(b[1]!=sum[0]&&sum[0]!=-1&&b[1]!=sum[1]&&sum[1]!=-1) f=1;
    else if(sum[0]==-1||b[0]==sum[0]) sum[0]=b[1];
    else sum[1]=b[1];
    if(f||sum[0]==-1||sum[1]==-1) printf("-1");
    else printf("%lld", sum[0]>sum[1]?sum[0]-sum[1]:sum[1]-sum[0]);
}