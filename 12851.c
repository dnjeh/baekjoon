#include <stdio.h>
int a[5000000], b[100001][2];
int main() {
    int i, cnt, c, aind=0, daind=1, ind=1, f=0, cnt2=0;
    scanf("%d %d", &a[0], &c);
    b[a[0]][0]=1;
    b[a[0]][1]=0;
    for(cnt=0;!f;cnt++) {
        for(daind=ind;aind<daind;aind++) {
            if(a[aind]==c) {    
                cnt2++;
                f=1;
            }
            else {
                if(a[aind]-1>=0&&(!b[a[aind]-1][0]||b[a[aind]-1][1]>=cnt)) {
                    a[ind++]=a[aind]-1;
                    //if(a[aind]-1!=c) {
                        b[a[aind]-1][0]=1;
                        b[a[aind]-1][1]=cnt;
                    //}
                }
                if(a[aind]+1<=c&&(!b[a[aind]+1][0]||b[a[aind]+1][1]>=cnt)) {
                    a[ind++]=a[aind]+1;
                    //if(a[aind]+1!=c) {
                        b[a[aind]+1][0]=1;
                        b[a[aind]+1][1]=cnt;
                    //}
                }
                if(a[aind]*2<=100000&&(!b[a[aind]*2][0]||b[a[aind]*2][1]>=cnt)) {
                    a[ind++]=a[aind]*2;
                    //if(a[aind]*2!=c) {
                        b[a[aind]*2][0]=1;
                        b[a[aind]*2][1]=cnt;
                    //}
                }
            }
        }
    }
    printf("%d\n%d", cnt-1, cnt2);
}