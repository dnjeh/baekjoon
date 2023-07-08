#include <stdio.h>
int main() {
    int i, j, p[3][2], a, b, c;
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++) {
            scanf("%d", &p[i][j]);
            if(i) p[i][j]-=p[0][j];
        }
    }
    a=p[1][1]*p[2][0];
    b=p[2][1]*p[1][0];
    if(a>b) c=-1;
    else if(a==b) c=0;
    else c=1; 
    printf("%d", c);
}