#include <stdio.h>
int a[10001];
int main() {
    int n, i, t, cnt=1, pre=-1, no;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for(i=10000;i>=1;i--) {
        if(a[i]) {
            a[i]--;
            no=cnt++*i;
            if(pre==-1||pre<no) pre=no;
            i++;
        }
    }
    printf("%d", pre);
}