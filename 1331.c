#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[6][6]={0, }, i, j;
    char t[2][2], trash, f[2]; //t[0]은 현재, t[1]은 이전
    for(i=0;i<36;i++) {
        scanf("%c%c%c", &t[0][0], &t[0][1], &trash);
        if((i&&(((abs((t[0][0]-65)-(t[1][0]-65))==2)&&(abs((t[0][1]-49)-(t[1][1]-49))==1))||((abs((t[0][0]-65)-(t[1][0]-65))==1)&&(abs((t[0][1]-49)-(t[1][1]-49))==2))))||!i) {
            a[t[0][0]-65][t[0][1]-49]++;
        }
        else {
            printf("Invalid");
            return 0;
        }
        t[1][0]=t[0][0];
        t[1][1]=t[0][1];
        if(!i) {
            f[0]=t[0][0];
            f[1]=t[0][1];
        }
    }
    for(i=0;i<6;i++) {
        for(j=0;j<6;j++) {
            if(!a[i][j]) {
                printf("Invalid");
                return 0;
            }
        }
    }
    if(((abs((f[0]-65)-(t[1][0]-65))==2)&&(abs((f[1]-49)-(t[1][1]-49))==1))||((abs((f[0]-65)-(t[1][0]-65))==1)&&(abs((f[1]-49)-(t[1][1]-49))==2)))
        printf("Valid");
    else {
        printf("Invalid");
    }
}