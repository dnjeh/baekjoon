#include <stdio.h>
int n, l;
void sta(int now, int f) {
    int i, j;
    if(now==1) printf("%c", f?'*':' ');
    else {
        for(j=((l/(now/3))%3)*3;j<((l/(now/3))%3+1)*3;j++) {
            sta(now/3, j!=4&&f?1:0);
        }
    }
}
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        l=i;
        sta(n, 1);
        printf("\n");
    }
}