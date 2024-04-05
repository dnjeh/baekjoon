#include <stdio.h>
int main() {
    int max, tmax, T, a, b, c;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a==b&&b==c) tmax=10000+a*1000;
        else if(a==b||a==c) {
            tmax=1000+a*100;
        }
        else if(b==c) {
            tmax=1000+b*100;
        }
        else {
            if(a<b) a=b;
            if(a<c) a=c;
            tmax=a*100;
        }
        if(!i||tmax>max) max=tmax;
    }
    printf("%d", max);
}
