#include <stdio.h>
int main() {
    int now=0;
    char t;
    for(;scanf("%c", &t)!=EOF&&t!='\n';) {
        if((t-48)/4) {
            printf("1");
            t-=4;
            now=1;
        } 
        else if(now) {
            printf("0");
        }
        if((t-48)/2) {
            printf("1");
            t-=2;
            now=1;
        }
        else if(now) {
            printf("0");
        }
        if(t-48) { 
            printf("1");
            now=1;
        }
        else if(now) {
            printf("0");
        }
    }
    if(!now) {
        printf("0");
    }
}