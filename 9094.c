#include <stdio.h>
int main() {
    int T, n, m, tans;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tans=0;
        scanf("%d %d", &n, &m);
        for(int _i=1;_i<n;_i++) for(int j=_i+1;j<n;j++) {
            if(!((_i*_i+j*j+m)%(_i*j))) tans++;
        }
        printf("%d\n", tans);
    }
}