#include <stdio.h>
int main() {
    int a[5], i, max=0, min=100, mid, avg=0;
    for(i=0;i<5;i++) {
        scanf("%d", &a[i]);
        avg+=a[i];
        if(max<a[i]) max=a[i];
        if(min>a[i]) min=a[i];
    }
    avg/=5;
    for(i=0;i<5;i++) {
        if(a[i]==max) {
            a[i]=max=-1;
        }
        else if(a[i]==min) {
            a[i]=min=-1;
        }
    }
    for(i=0;i<5;i++) {
        if(a[i]!=-1&&(max<a[i]||max==-1)) max=a[i];
        if(a[i]!=-1&&(min>a[i]||min==-1)) min=a[i];
    }
    for(i=0;i<5;i++) {
        if(a[i]==max) {
            a[i]=max=-1;
        }
        else if(a[i]==min) {
            a[i]=min=-1;
        }
    }
    for(i=0;i<5;i++) {
        if(a[i]!=-1) {
            mid=a[i];
        }
    }
    printf("%d\n%d", avg, mid);
}