#include <stdio.h>
int n, a[15], b[15];
int abs(int _t) { return _t<0?_t*-1:_t; }
int cek(int now, int l) {
    int f=1;
    for(int i=0;i<now;i++) {
        if(abs(now-i)==abs(b[i]-l)) f=0;
    }
    return f;
}
int bak(int now) {
    int i, ret=0;
    if(now==n) ret++; 
    else {
        for(i=0;i<n;i++) {
            if(!a[i]&&cek(now, i)) {
                a[i]=1; b[now]=i;   
                ret+=bak(now+1);
                a[i]=0;
            }
        }
    } return ret;
}
int main() {
    scanf("%d", &n);
    printf("%d", bak(0));
}