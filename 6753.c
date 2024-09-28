#include <stdio.h>
int a[5][5], cnt=0, T;
void fun() {
    int at[5]={0, }, tcnt=0;
    for(int i=1;i<4;i++) {
        for(int j=i+1;j<=4;j++) {
            if(a[i][j]==1) at[j]+=3;
            else if(a[i][j]==2) at[i]+=3;
            else {
                at[i]++;
                at[j]++;
            }
        }
    }
    if(at[T]>at[1]) tcnt++;
    if(at[T]>at[2]) tcnt++;
    if(at[T]>at[3]) tcnt++;
    if(at[T]>at[4]) tcnt++;
    if(tcnt>=3) cnt++;
}
void bak(int t, int tt) {
    if(tt>=5) {
        t++;
        tt=t+1;
    }
    if(t>=4) fun();
    else {
        if(!a[t][tt]) for(int k=1;k<=3;k++) {
            a[t][tt]=k;
            bak(t, tt+1);
            a[t][tt]=0;
        }
        else bak(t, tt+1);
    }
}
int main() {
    int g, t, tt, ttt, tttt;
    scanf("%d %d", &T, &g);
    for(int i=0;i<g;i++) {
        scanf("%d %d %d %d", &t, &tt, &ttt, &tttt);
        a[t][tt]=(ttt<tttt?1:(ttt>tttt?2:3));
    }
    bak(1, 2);
    printf("%d", cnt);  
}