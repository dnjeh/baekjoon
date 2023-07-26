#include <stdio.h>
int a[1000000], sta[1000000], sn=-1, n;
void yum(int t) { sta[++sn]=t;}

int main() {
    int i, pri;
    scanf("%d", &n);
    for(i=0;i<n;i++) 
        scanf("%d", &a[i]);
    for(i=n-1;i>=0;i--) {
        pri=-1;
        while(sn>=0&&sta[sn]<=a[i]) {
            sn--;
        }
        if(sn==-1) yum(a[i]);
        else {
            pri=sta[sn];
            yum(a[i]);
        }
        a[i]=pri;
    }
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
}