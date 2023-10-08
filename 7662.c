#include <stdio.h>
#include <stdlib.h>
#define END 9223372036854775807
long long int min[1000001], minc=0;
long long int max[1000001], maxc=0;
long long int eis[1000001], now;
void iminput(long long int n) {
    long long int _i, _t, f;
    min[++minc]=n;
    f=minc;
    for(_i=minc/2;_i>=1;_i/=2) {
        if(min[f]<min[_i]) {
            _t=min[_i];
            min[_i]=min[f];
            min[f]=_t;
        }
        else break;
        f=_i;        
    }
}
long long int ominput() {
    long long int _fin, _i, _t;
    do {
        if(!minc) _fin=END;
        else {
            _fin=min[1];
            min[1]=min[minc];
            min[minc--]=0;
            for(_i=2;_i<=minc;_i*=2) {
                if(min[_i/2]>min[_i]||(min[_i/2]>min[_i+1]&&(_i+1<=minc))) {
                    _t=min[_i/2];
                    min[_i/2]=min[_i]<min[_i+1]||_i+1>minc?min[_i]:min[_i+1];
                    if(min[_i]<min[_i+1]||_i+1>minc) min[_i]=_t;
                    else min[++_i]=_t;
                }
                else break;
            }
        }
    } while(_fin!=END&&eis[llabs(_fin%10000000)]==now);
    if(_fin!=END) eis[llabs(_fin%10000000)]=now;
    return _fin;
}
void imaxput(long long int n) {
    long long int _i, _t, f;
    max[++maxc]=n;
    f=maxc;
    for(_i=maxc/2;_i>=1;_i/=2) {
        if(max[f]>max[_i]) {
            _t=max[_i];
            max[_i]=max[f];
            max[f]=_t;
        }
        else break;
        f=_i;        
    }
}
long long int omaxput() {
    long long int _fin, _i, _t;
    do {
        if(!maxc) _fin=END;
        else {
            _fin=max[1];
            max[1]=max[maxc];
            max[maxc--]=0;
            for(_i=2;_i<=maxc;_i*=2) {
                if(max[_i/2]<max[_i]||(max[_i/2]<max[_i+1]&&(_i+1<=maxc))) {
                    _t=max[_i/2];
                    max[_i/2]=max[_i]>max[_i+1]||_i+1>maxc?max[_i]:max[_i+1];
                    if(max[_i]>max[_i+1]||_i+1>maxc) max[_i]=_t;
                    else max[++_i]=_t;
                }
                else break;
            }
        }
    } while(_fin!=END&&eis[llabs(_fin%10000000)]==now);
    if(_fin!=END) eis[llabs(_fin%10000000)]=now;
    return _fin;
}
int main() {
    char m;
    long long int n, t, i, j, T, tt, mmiu, mmax;
    scanf("%lld", &T);
    for(i=1;i<=T;i++) {
        now=i;
        maxc=minc=0;
        scanf("%lld", &n);
        for(j=1;j<=n;j++) {
            scanf("\n%c %lld", &m, &t);
            if(m=='I') {
                iminput(t*10000000+((t<0)?(-j):j));
                imaxput(t*10000000+((t<0)?(-j):j));
            }
            else {
                if(t==-1&&minc>0) ominput();
                else if(maxc>0) omaxput();
            }
        }
        mmiu=ominput(); mmax=omaxput();
        if(mmiu==END&&mmax==END) printf("EMPTY\n");
        else if(mmiu==END||mmax==END) printf("%lld %lld\n"
        , mmiu==END?mmax/10000000:mmiu/10000000, mmiu==END?mmax/10000000:mmiu/10000000);
        else printf("%lld %lld\n", mmax/10000000, mmiu/10000000);
    }
}