#include <stdio.h>
int main() {
    int n, m, t[2], min[2], i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        for(j=0;j<2;j++) {
            scanf("%d", &t[j]); 
            if(min[j]>t[j]||!i) min[j]=t[j];
        }
    }
    if(min[0]<=min[1]*6) {
        if(!(n%6)||((n/6+1)*min[0])<((n/6)*min[0]+(n%6)*min[1])) {
            printf("%d", !(n%6)?(n/6)*min[0]:(n/6+1)*min[0]);
        }
        else {
            printf("%d", (n/6)*min[0]+(n%6)*min[1]);
        }
    }
    else {
        printf("%d", n*min[1]);
    }
}