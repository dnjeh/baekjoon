#include <stdio.h>
int mem[2][200000];
int main() {
    int n, t, tans;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        tans=0;
        scanf("%d", &t);
        if(i) {
            mem[0][i]=(t<mem[0][i-1]?t:mem[0][i-1]);
            mem[1][i]=(t-mem[0][i-1]>mem[1][i-1]?t-mem[0][i-1]:mem[1][i-1]);
            tans=mem[1][i];
        }
        printf("%d ", tans);
        if(!i) {
            mem[0][i]=t;
        }
    }
}