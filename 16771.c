#include <stdio.h>
int a[2][20], b[2000];
int aput(int t, int tt) {
    a[!t][++a[!t][0]]=a[t][tt];
    a[t][tt]=0;
    return a[!t][a[!t][0]];
}
int apop(int t) {
    return a[t][a[t][0]--];
}
void bak(int now, int milk) {
    if(now>=4) {
        if(!b[milk])
            b[milk]=1;
    }
    else {
        for(int i=1;i<=a[now%2][0];i++) {
            if(a[now%2][i]) {
                bak(now+1, milk+aput(now%2, i)*((!(now%2))?-1:1));
                a[now%2][i]=apop(!(now%2));
            }
        }
    }
}
int main() {
    int cnt=0;
    for(int i=0;i<2;i++) {
        a[i][0]=10;
        for(int j=1;j<=10;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    bak(0, 1000);
    for(int i=0;i<2000;i++) {
        if(b[i]) 
        cnt++;
    }
    printf("%d", cnt);
}