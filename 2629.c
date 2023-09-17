#include <stdio.h>
int mem[40001], a[2][30];
int n, m;
void set();
int max(int a, int b) { return a>b?a:b; } 
void dp() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=40000;j-a[0][i]>=0;j--) {
            if(mem[j-a[0][i]]!=-1||mem[j]!=-1) 
                mem[j]=max(mem[j], mem[j-a[0][i]]+a[1][i]);
        }
    }
}
int main() {
    int i, j, t;
    scanf("%d", &n);
    set();
    for(i=0;i<n;i++) {
        scanf("%d", &a[0][i]);
        a[1][i]=1;
    } dp();
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        scanf("%d", &t);
        for(j=0;j+t<=40000;j++) {
            if(mem[j]!=-1&&mem[j+t]!=-1) break;
        }
        if(j+t<=40000) printf("Y ");
        else printf("N ");
    }
}
void set() {
    int i;
    for(i=1;i<=40000;i++) { 
        mem[i]=-1;
    }
}