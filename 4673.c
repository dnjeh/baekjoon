#include <stdio.h>
int a[11000];
int d(int n) {
    int sum=n;
    for(;n;n/=10) {
        sum+=n%10;
    }
    return sum; 
}
int main() {
    int i, t;
    for(i=1;i<=10000;i++) {
        t=i;
        while(t<=10000) {
            t=d(t);
            a[t]=1;
        }
    }
    for(i=1;i<=10000;i++) {
        if(!a[i]) {
            printf("%d\n", i);
        }
    }
}