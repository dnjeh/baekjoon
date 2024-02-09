#include <stdio.h>
#include <math.h>

int a[5000001];
void pnset(int a[], int tmax) {
    for(int i=2;i<sqrt(tmax)+2;i++) {
        for(int j=2;i*j<=tmax;j++) {
            a[i*j]=1;
        }
    }
    a[2]=0;
}

int pnfind(int t) {
    for(int i=t;i>=2;i--) {
        if(!a[i]) return i;
    }
    return -1;
}

int main() {
    int n, f;
    scanf("%d", &n);
    int sta=2, end=n, mid;
    pnset(a, n);
    for(int i=0;i<20&&sta<=end;i++) {
        mid=pnfind((sta+end)/2);
        if(mid==-1) a[100000000]++;
        printf("? %d\n", mid);
        fflush(stdout);
        scanf("%d", &f);
        if(f) {
            sta=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    printf("! %d\n", mid);
    fflush(stdout);
    return 0;
}

