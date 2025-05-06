#include <stdio.h>
int main() {
    int a[2]={0, }, t;
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &t);
            a[i]+=t*(3-j);
        }
    }
    printf("%c", a[0]>a[1]?'A':(a[0]<a[1]?'B':'T'));
}