#include <stdio.h>

int fun(int* t, int size) {
    int ret=0;
    for(int i=0;(ret||t[i])&&i<size;i++, ret*=16) {
        ret+=t[i];
    }
    return ret/16;
}

int main() {
    int a[4]={0, }, b[4]={0, }, c[5]={0, }, t, tt, ttt;
    int d[16] = {0, };
    for(a[0]=b[2]=0;a[0]<16;a[0]=++b[2]) { if(d[a[0]]) continue;          d[a[0]]=1; 
    for(a[1]=b[1]=0;a[1]<16;a[1]=++b[1]) { if(d[a[1]]) continue;          d[a[1]]=1;
    for(a[2]=c[0]=0;a[2]<2;a[2]=++c[0]) { if(d[a[2]]) continue;           d[a[2]]=1;
    for(a[3]=c[1]=0;a[3]<16;a[3]=++c[1]) { if(d[a[3]]) continue;          d[a[3]]=1;
    for(b[0]=16-a[0];b[0]<16;++b[0]) { if(d[b[0]]) continue;              d[b[0]]=1;
        if((a[0]+b[0])%16+(a[1]*2)/16==c[1]) 
    for(b[3]=0;b[3]<16;b[3]++) { if(d[b[3]]) continue;                    d[b[3]]=1;
    for(c[2]=0;c[2]<16;c[2]++) { if(d[c[2]]) continue;                    d[c[2]]=1;
    for(c[3]=0;c[3]<16;c[3]++) { if(d[c[3]]) continue;                    d[c[3]]=1;
    for(c[4]=0;c[4]<16;c[4]++) { if(d[c[4]]) continue;                    d[c[4]]=1;
        if((t=fun(a, 4))&&(tt=fun(b, 4))&&(ttt=fun(c, 5))&&t+tt==ttt) {
            printf("%x + %x = %x\n", t, tt, ttt);
        }
    d[c[4]]=0;}
    d[c[3]]=0;}
    d[c[2]]=0;}
    d[b[3]]=0;}
    d[b[0]]=0;}
    d[a[3]]=0;}
    d[a[2]]=0;}
    d[a[1]]=0;}
    d[a[0]]=0;}
}