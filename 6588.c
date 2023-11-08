#include <stdio.h>
int a[1000001];
void set();
int main() {
    int i, t, f;
    set();
    //for(i=0;i<=1000000;i++) if(!a[i]) printf("%d ", i);
    scanf("%d", &t);
    while(t) {
        f=0;
        for(i=3;t-i>=i;i+=2) {
            if(!a[i]&&!a[t-i]) {
                printf("%d = %d + %d\n", t, i, t-i);
                f=1;
                break;
            }
        } if(!f) printf("Goldbach's conjecture is wrong.\n");
        scanf("%d", &t);
    }
}
void set() {
    int i, j;
    for(i=2;i<=1000;i++) {
        if(!a[i]) for(j=2;i*j<=1000000;j++) {
            a[i*j]=1;
        }
    }
}