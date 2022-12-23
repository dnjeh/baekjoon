#include <stdio.h>
#include <math.h>
int main() {
    int T, i, j, a[3], k;
    char t[9];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", t);
        a[0]=(t[0]-48)*10+t[1]-48;
        a[1]=(t[3]-48)*10+t[4]-48;
        a[2]=(t[6]-48)*10+t[7]-48;
        for(j=5;j>=0;j--) {
            for(k=0;k<3;k++) {
                
                printf(((int)pow(2, j)&a[k])?"1":"0");
            }
        }
        printf(" ");
        for(k=0;k<3;k++) {
            for(j=5;j>=0;j--) {
                printf(((int)pow(2, j)&a[k])?"1":"0");
            }
        }
        printf("\n");
    }
}