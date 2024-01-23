#include <stdio.h>
#include <math.h>
int aa[10001];
void pnset(int a[], int tmax);
int main() {
    int *a=aa;
    int T, t, f, b, c;
    pnset(a, 10000);
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        f=0;
        scanf("%d", &t);
        for(int j=t/2;j>=2&&!f;j--) {
            if(!a[j]) {
                for(int k=j;j+k<=t&&!f;k++) {
                    if(!a[k]&&j+k==t) {
                        printf("%d %d\n", j, k);
                        f=1;
                    }
                }
            }
        }
    }
}

void pnset(int a[], int tmax) {
    for(int i=2;i<sqrt(tmax)+2;i++) {
        for(int j=2;i*j<=tmax;j++) {
            a[i*j]=1;
        }
    }
}