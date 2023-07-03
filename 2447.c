#include <stdio.h>
int cnt, n;

void sta(int )
void star11(int _t, int f, int flo) {
    int i, j, jj;
    if(_t==1) {
        cnt++;
        printf("%c", f?'*':' ');
        if(cnt>=n) { printf("\n"); cnt=0; }
    }
    else {
        /*for(i=0;i<3;i++)*/ for(j=0;j<3;j++) {
            for(jj=0;jj<3;jj++) {
                if(j==flo) {
                    star11(_t/3, f&&(j!=1||jj!=1)?1:0, i);
                }
            }
        }
    }
}
int main() {
    int i;
    scanf("%d", &n);
    for(i=0;i<3;i++) {
        star11(n, 1, i);
    }
}