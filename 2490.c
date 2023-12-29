#include <stdio.h>
int main() {
    int sum, i, j, t;
    for(i=0;i<3;i++) {
        sum=0;
        for(j=0;j<4;j++) {
            scanf("%d", &t);
            sum+=t;
        }
        if(sum==3) printf("A\n");
        else if(sum==2) printf("B\n");
        else if(sum==1) printf("C\n");
        else if(sum==0) printf("D\n");
        else printf("E\n");
    }
}