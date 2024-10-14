#include <stdio.h>
#include <math.h>

int a[5000001], b[400000], bind;
void pnset(int a[], int tmax) {
    for(int i=2;i<sqrt(tmax)+2;i++) {
        if(!a[i]) for(int j=2;i*j<=tmax;j++) {
            a[i*j]=1;
        }
    }
    for(int i=2;i<=tmax;i++) {
        if(!a[i]) {
            b[bind++]=i;
        }
    }
}

int main() {
    int n, f;
    scanf("%d", &n);
    pnset(a, n);
    int sta=0, end=bind-1, mid;
    for(int i=0;i<20&&sta<=end;i++) {
        mid=b[(sta+end)/2];
        printf("? %d\n", mid);
        fflush(stdout);
        scanf("%d", &f);
        if(f) {
            sta=(sta+end)/2+1;
        }
        else {
            end=(sta+end)/2-1;
        }
    }
    printf("! %d\n", b[sta]);
    fflush(stdout);
    return 0;
}

