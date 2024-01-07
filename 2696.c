#include <stdio.h>
int a[300100], cnt=0;
void iheaput(int n) { //min queue, right half
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
    if(!cnt) _fin=200000;
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
int ra[300100], rcnt=0;
void riheaput(int n) {
    int _i, _t, f;
    ra[++rcnt]=n;
    f=rcnt;
    for(_i=rcnt/2;_i>=1;_i/=2) {
        if(ra[f]>ra[_i]) {
            _t=ra[_i];
            ra[_i]=ra[f];
            ra[f]=_t;
        }
        else break;
        f=_i;        
    }
}
int roheaput() {
    int _fin, _i, _t;
    if(!rcnt) _fin=-200000;
    else {
        _fin=ra[1];
        ra[1]=ra[rcnt];
        ra[rcnt--]=0;
        for(_i=2;_i<=rcnt;_i*=2) {
            if(ra[_i/2]<ra[_i]||(ra[_i/2]<ra[_i+1]&&(_i+1<=rcnt))) {
                _t=ra[_i/2];
                ra[_i/2]=ra[_i]>ra[_i+1]||_i+1>rcnt?ra[_i]:ra[_i+1];
                if(ra[_i]>ra[_i+1]||_i+1>rcnt) ra[_i]=_t;
                else ra[++_i]=_t;
            }
            else break;
        }
    }
    return _fin;
}

void swp(int *a, int *b) { 
    int _t;
    _t=*a;
    *a=*b;
    *b=_t;
}
int main() {
    int T, n, i, j, l, t, r, res, tcnt;
    scanf("%d", &T);
    for(j=0;j<T;j++) {
        cnt=rcnt=0;
        scanf("%d", &n);
        printf("%d\n", n/2+1);
        for(tcnt=i=0;i<n;i++) {  
            scanf("%d", &t);
            if(!i) {
                iheaput(t);
                res=t;
            }
            else if(i==1) {
                r=oheaput();
                if(t>r) swp(&t, &r);
                res=t;
                riheaput(t);
                iheaput(r);
            }
            else if(!(i%2)) {
                r=oheaput();
                l=roheaput();
                if(t<l) {
                    res=l;
                    swp(&t, &l);
                }
                else if(t<r||t==r) res=t;
                else if(r<t) res=r;
                iheaput(t);
                iheaput(r);
                riheaput(l);
            }
            else {
                r=oheaput();
                l=roheaput();
                if(t<l) res=l;
                else if(t<r||t==r) res=t;
                else if(r<t) {
                    res=r;
                    swp(&r, &t);
                }
                riheaput(t);
                iheaput(r);
                riheaput(l);
            }
            if(!(i%2)) {
                printf("%d", res);
                tcnt++;
                if(!(tcnt%10)) printf("\n");
                else if(tcnt<(n/2+1)) printf(" ");
                else if(tcnt>=(n/2+1)) printf("\n");
            }
        }
    }
}