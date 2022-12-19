#include <stdio.h> 
int main() {
    int a[4], n, i, j, k, key, max=0, t, tt;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<4;j++) {
            scanf("%d", &a[j]);
        }
        for(k=1;k<4;k++) {
            key=a[k];
            for(j=k-1;j>=0&&a[j]<key;j--) {
                a[j+1]=a[j];
            }
            a[j+1]=key;
        }
        t=0;
        for(j=0;j<4;j++) {
            if(j!=3&&a[j]==a[j+1]) {
                t++;
            }
        }

        if(t==3) {
            tt=50000+a[0]*5000;
        }
        else if(t==2) {
            if(a[1]==a[2]) {
                tt=10000+a[1]*1000;
            }
            else {
                tt=2000+a[1]*500+a[3]*500;
            }
        }
        else if(t==1) {
            if(a[0]==a[1]) {
                tt=1000+a[0]*100;
            }
            else {
                tt=1000+a[2]*100;
            }
        }
        else {
            tt=a[0]*100;
        }
        if(max<tt) max=tt;
    }
    printf("%d", max);
}