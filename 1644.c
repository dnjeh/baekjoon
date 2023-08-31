#include <stdio.h>
#include <math.h>
long long int a[4000001], b[300000], s[300000], ind=0;
void set();
int sget(int l, int r) {
    if(!l) return s[r];
    else return s[r]-s[l-1];
}
int main() {
    int i, j, n, m, l, r, cnt=0, t;
    set();
    scanf("%d", &n);
    for(i=2;i<=4000000;i++) {
        if(a[i]) {
            b[ind]=a[i];
            s[ind++]=i+(i!=2?s[ind-1]:0);
        }
    }
    for(l=r=0;l<=r&&r<ind;) {
        t=sget(l, r);
        if(t<n) r++;
        else if(t>n) l++;
        else {
            cnt++;
            l++;
        }
    }
    printf("%d", cnt);
}

void set() {
    int i, j;
    for(i=2;i<=4000000;i++) a[i]=i;
    for(i=2;i<=2000;i++) {
        if(a[i]) {
            for(j=2;(j*i)<=4000000;j++) {
                a[j*i]=0;
            }
        }
    }
}
