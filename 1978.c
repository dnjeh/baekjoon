#include <stdio.h>
int a[1001]={0, 0, 1}, _a[1001]={2, };
void sosu() {
    int _i, _j, _cnt=1;
    for(_i=3;_i<1001;_i++) {
        for(_j=0;_j<_cnt;_j++) {
            if(!(_i%_a[_j])) {
                a[_i]=1;
                break;
            }
        }
        if(a[_i]) {
            a[_i]=0;
        }
        else {
            _a[_cnt++]=_i;
            a[_i]=1;
        }
    }
}
int main() {
    sosu();
    int n, t, i, cnt=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(a[t]) cnt++;
    }
    printf("%d", cnt);
}