#include <stdio.h>
int main() {
    int T, n, t, tmax, tmin;
    scanf("%d", &T);
    for(int k=0;k<T;k++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(!i||t>tmax) tmax=t;
            if(!i||t<tmin) tmin=t;
        }
        printf("%d %d\n", tmin, tmax);
    }
}