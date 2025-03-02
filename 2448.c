#include <stdio.h>
int a[3072][7000];
void fun(int now, int y, int x) {
    if(now==1) {
        a[y][x+2]=a[y+1][x+1]=a[y+1][x+3]=1;
        for(int i=0;i<5;i++) {
            a[y+2][x+i]=1;
        }
        return;
    }
    fun(now/2, y, x+now/2*3);
    fun(now/2, y+now/2*3, x);
    fun(now/2, y+now/2*3, x+now*3);
}
int main() {
    int n;
    scanf("%d", &n);
    fun(n/3, 0, 0);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n/3*5+n/3-1;j++) {
            printf("%c", a[i][j]?'*':' ');
        }
        printf("\n");
    } 
}