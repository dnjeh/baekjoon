#include <stdio.h>
int main() {
    int a[5], t;
    for(int i=0;i<5;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;a[0]!=1||a[1]!=2||a[2]!=3||a[3]!=4||a[4]!=5;i++) {
        if(i>=4) i=0;
        if(a[i]>a[i+1]) {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            for(int j=0;j<5;j++) {
                printf("%d%c", a[j], j+1<5?' ':'\n');
            }
        } 
    }
}