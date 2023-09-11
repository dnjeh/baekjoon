#include <stdio.h>
int a[3][1000], mem[3][3][1000], n;
int dp(int _t, int _c) {
    int ret, t;
    if(mem[_t][_c]) ret=mem[_t][_c];
    else {
        ret=dp(_t-1, (_c+1)%3)+a[_t][_c];
        if((t=dp(_t-1, (_c+2)%3))+a[_t][_c]<ret) ret=t+a[_t][_c];
        mem[_t][_c]=ret;
    }
    return ret;
}
int main() {
    int i, j, minseong=0, t;
    scanf("%d", &n);
    for(i=0;i<3;i++) {
        for(j=0;j<n;j++) { scanf("%d", &a[i][j]); if(!i) mem[i][j]=a[i][j]; }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) { 
            if(i==j) continue; 
            t=dp(n-1, i, j); 
            if(t<minseong||(!i)&&(!j)) minseong=t; 
        
        }
    }
    printf("%d", minseong);
}
