#include <stdio.h>
int main() {
    int t, a=0;
    for(int i=0;i<10;i++) {
        scanf("%d", &t);
        if(t==1) a=(a+1)%4;
        else if(t==2) a=(a+2)%4;
        else a=(a-1+4)%4;
    }
    if(a==0) printf("N");
    else if(a==1) printf("E");
    else if(a==2) printf("S");
    else printf("W");
}

// 0
//3 1
// 2