#include <stdio.h>
int a[100100], cnt;
 int sum;
void iheaput(int n) {
    int _i, _t, f;
    a[++cnt]=n;
    f=cnt;
    for(_i=cnt/2;_i>=1;_i/=2) {
        if(a[f]<a[_i]) {
            _t=a[_i];
            a[_i]=a[f];
            a[f]=_t;
        }
        else break;
        f=_i;        
    }
}
int oheaput() {
    int _fin, _i, _t;
    if(!cnt) _fin=0;
    else {
        _fin=a[1];
        a[1]=a[cnt];
        a[cnt--]=0;
        for(_i=2;_i<=cnt;_i*=2) {
            if(a[_i/2]>a[_i]||(a[_i/2]>a[_i+1]&&(_i+1<=cnt))) {
                _t=a[_i/2];
                a[_i/2]=a[_i]<a[_i+1]||_i+1>cnt?a[_i]:a[_i+1];
                if(a[_i]<a[_i+1]||_i+1>cnt) a[_i]=_t;
                else a[++_i]=_t;
            }
            else break;
        }
    }
    return _fin;
}
 int car() {
     int t;
    for(;cnt>1;) {
        t=oheaput()+oheaput();
        sum+=t;
        iheaput(t);
    }
}
int main() {
    int n, t, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        iheaput(t);
    }
    car();
    printf("%lld", sum);
}