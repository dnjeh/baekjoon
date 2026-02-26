#include <stdio.h>
int main() {
    int b[4]={1, 1, 0, -1000};
    int T, t;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        int a[4]={0, };
        for(int j=0;j<8;j++) {
            scanf("%d", &t);
            a[j%4]+=t;
            if(a[j%4]<b[j%4]) a[j%4]=b[j%4];
        }
        printf("%d\n", a[0]+a[1]*5+a[2]*2+a[3]*2);
    }
}