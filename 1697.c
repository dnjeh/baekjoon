#include <stdio.h>
int a[1001000], b[100001];
int main() {
    int i, cnt, c, aind=0, daind=1, ind=1, f=0;
    scanf("%d %d", &a[0], &c);
    b[a[0]]=1;
    for(cnt=0;!f;cnt++) {
        for(daind=ind;!f&&aind<daind;aind++) {
            if(a[aind]==c) f=1;
            else {
                if(!b[a[aind]-1]&&a[aind]-1>=0) {
                    a[ind++]=a[aind]-1;
                    b[a[aind]-1]=1;
                }
                if(!b[a[aind]+1]&&a[aind]+1<=c) {
                    a[ind++]=a[aind]+1;
                    b[a[aind]+1]=1;
                }
                if(!b[a[aind]*2]&&a[aind]*2<=100000) {
                    a[ind++]=a[aind]*2;
                    b[a[aind]*1]=1;
                }
            }
        }
    }
    printf("%d", cnt-1);
}