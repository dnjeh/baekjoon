#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int i, j, tsum, t;
    char a[9];
    for(scanf("%s", a);a[0]!='#';scanf("%s", a)) {
        tsum=j=0;
        for(i=(int)strlen(a)-1;i>=0;i--) {
            switch(a[i]) {
            case '-': t=0; break;
            case '\\': t=1; break;
            case '(': t=2; break;
            case '@': t=3; break;
            case '?': t=4; break;
            case '>': t=5; break;
            case '&': t=6; break;
            case '%': t=7; break;
            default: t=-1; break;
            }
            tsum+=((int)pow(8,j)*t);
            j++;
        }
        printf("%d\n", tsum);
    }
}