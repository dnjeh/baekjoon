#include <stdio.h>
#include <string.h>
int main() {
    int T, n, max, it;
    char cmax[25], t[25];
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        max=0;
        for(int j=0;j<n;j++) {
            scanf("%s %d", t, &it);
            if(!j||it>max) {
                max=it;
                strcpy(cmax, t);
            }
        }
        printf("%s\n", cmax);
    }
}