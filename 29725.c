#include <stdio.h>
int fun(char t) {
    int ret=0, f=1;
    if(t>='a') {
        t-='a'-'A';
        f=-1;
    }
    switch(t) {
        case 'P': ret=1; break;
        case 'N': ret=3; break;
        case 'B': ret=3; break;
        case 'R': ret=5; break;
        case 'Q': ret=9; break;
        default:
            break;
    }
    return ret*f;
}
int main() {
    int sum=0;
    char t[10];
    for(int i=0;i<8;i++) {
        scanf("%s", t);
        for(int j=0;j<8;j++) {
            sum+=fun(t[j]);
        }
    }
    printf("%d", sum);
}