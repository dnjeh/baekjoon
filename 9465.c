#include <stdio.h>
int a[100000][3], mem[100000][3];
int n;
int dp(int _t, int _c) {
    int ret, t;
    if(mem[_t][_c]!=-1) ret=mem[_t][_c];
    else {
        ret=dp(_t-1, (_c+1)%3)+a[_t][_c];
        if((t=dp(_t-1, (_c+2)%3))+a[_t][_c]>ret) {
            ret=t+a[_t][_c];
        }
        mem[_t][_c]=ret;
    }
    return ret;
}
void clear() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<3;j++) {
            mem[i][j]=!i?a[0][j]:-1;
        }
    }
}
int main() {
    int i, j, k, T, max;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d", &n);
        for(k=0;k<2;k++) {
            for(j=0;j<n;j++) {
                scanf("%d", &a[j][k]);
            }
        }
        clear();
        for(j=0;j<3;j++) {
            if(dp(n-1, j)>max||!j) {
                max=dp(n-1, j); 
            }
        }
        printf("%d\n", max);
    } 
}