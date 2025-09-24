#include <stdio.h>
int main() {
    int a[6] = {13, 7, 5, 3, 3, 2}, b[2]={0, }, t;
    for(int j=0;j<2;j++) {
        for(int i=0;i<6;i++) {
            scanf("%d", &t);
            if(t) b[j]+=a[i]*t;
        }
    }
    printf("%s", b[0]*2>b[1]*2+3?"cocjr0208":"ekwoo");
}