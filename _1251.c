#include <stdio.h>
char a[51];
void flop(int _t, int _t2) {
    int _i=_t, _j=_t2;
    char _tt;
    for(;_i<=_j;_i++, _j--) {
        _tt=a[_i];
        a[_i]=a[_j];
        a[_j]=_tt;
    }
}
int main() {
    int i, t;
    char max[2]={'\0', }, min[2]={126, };
    scanf("%s", a);
    for(i=0;a[i+2]!='\0';i++) {
        if(max[0]<a[i]) {
            max[0]=a[i];
            max[1]=i;
        }
        if(min[0]>=a[i]) {
            min[0]=a[i];
            min[1]=i;
        }
    }
    if(min[0]==max[0]) {
        t=1;
    }
    else {
        t=min[1]+1;
        flop(0, min[1]);
    }
    

    printf("%s", a);
}