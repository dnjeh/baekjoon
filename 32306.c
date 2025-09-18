#include <stdio.h>
int main() {
    int t, a[2]={0, };
    for(int i=0;i<2;i++) {
        for(int j=1;j<=3;j++) {
            scanf("%d", &t);
            a[i]+=t*j;
        }
    }
    printf("%d", a[0]>a[1]?1:(a[0]<a[1]?2:0));
}