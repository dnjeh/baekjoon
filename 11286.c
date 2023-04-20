#include <stdio.h>
int a[100001], cnt=0;
int A(int _t) { return _t<0?_t*-1:_t; }
void iheaput(int n) {
    int _i, _t, f;
    a[++cnt]=n;
    f=cnt;
    for(_i=cnt/2;_i>=1;_i/=2) {
        if(A(a[f])<A(a[_i])||(A(a[f])==A(a[_i])&&a[f]<a[_i])) {
            _t=a[_i];
            a[_i]=a[f];
            a[f]=_t;
        }
        else break;
        f=_i;        
    }
}
int oheaput(int n) {
    int _fin, _i, _t;
    if(!cnt) _fin=0;
    else {
        _fin=a[1];
        a[1]=a[cnt];
        a[cnt--]=0;
        for(_i=2;_i<=cnt;_i*=2) {
            if(A(a[_i/2])>A(a[_i])||(A(a[_i/2])==A(a[_i])&&a[_i/2]>a[_i])||((_i+1<=cnt)&&(A(a[_i/2])>A(a[_i+1])||(A(a[_i/2])==A(a[_i+1])&&a[_i/2]>a[_i+1])))) {
                _t=a[_i/2];
                a[_i/2]=((A(a[_i])<A(a[_i+1])||(A(a[_i])==A(a[_i+1])&&a[_i]<a[_i+1]))||_i+1>cnt)?a[_i]:a[_i+1];
                if((A(a[_i])<A(a[_i+1])||(A(a[_i])==A(a[_i+1])&&a[_i]<a[_i+1]))||_i+1>cnt) a[_i]=_t;
                else a[++_i]=_t;
            }
            else break;
        }
    }
    return _fin;
}
int main() {
    int n, t, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        if(t) iheaput(t);
        else printf("%d\n", oheaput(t));
    }
}