#include <stdio.h>
int main() {
    int N, i, t[2]={0, }, deg=0, x=0, y=0, T;
    char sTr[6];
    scanf("%d %d", &N, &T);
    for(i=0;i<N;i++) {
        scanf("%d %s", &t[0], sTr);
        switch(deg) {
        case 0: x+=t[0]-t[1]; break;
        case 1: y-=t[0]-t[1]; break;
        case 2: x-=t[0]-t[1]; break;
        case 3: y+=t[0]-t[1]; break;
        default: break;
        }
        if(sTr[0]=='r') deg++;
        else deg--;
        deg=(deg+4)%4;
        t[1]=t[0];
    }
    switch(deg) {
    case 0: x+=T-t[1]; break;
    case 1: y-=T-t[1]; break;
    case 2: x-=T-t[1]; break;
    case 3: y+=T-t[1]; break;
    default: break;
    }
    printf("%d %d", x, y);
}