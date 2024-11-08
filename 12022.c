#include <stdio.h>
int a[2][50000], b[2][3], min=-1, n;
void ismm(int v, int* mm) {
    if(v>mm[1]) mm[1]=v;
    if(mm[0]==-1||mm[0]>v) mm[0]=v;
}
void isGok(int x, int y, int* at, int i, int at_i) {
    int f=0, cx=a[1][at[at_i]], cy=a[0][at[at_i]];
    if(!at_i&&x<cx||at_i==1&&x>cx||at_i==2&&y<cy||at_i==3&&y>cy) f++;
    if(f) at[at_i]=i;
}
void bak(int now) {
    int mmx[2]={-1, 0}, mmy[2]={-1, 0}, ottf[4]={-1, -1, -1, -1};
    for(int i=0;i<n;i++) {
        int x=a[1][i], y=a[0][i];
        if(y==-1) continue;
        ismm(x, mmx); ismm(y, mmy);
        for(int j=0;j<4;j++) {
            if(ottf[j]==-1) ottf[j]=i; 
            isGok(x, y, ottf, i, j);
        }
    }
    if(now>=3) {
        int t;
        if(min>(t=(mmx[1]-mmx[0])*(mmy[1]-mmy[0]))||min==-1) 
        min=t;
    }
    else {
        for(int i=0;i<4;i++) {
            int tnow=ottf[i];
            int t=a[0][tnow];
            a[0][tnow]=-1;
            bak(now+1);
            a[0][tnow]=t;
        }
    }
}
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[j][i]);
        }
    }
    bak(0);
    printf("%d", min);
}