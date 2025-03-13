#include <stdio.h>
struct n21773 {
    int id, time, prop;
} typedef Proc;

Proc a[100100];
int cnt=0;
void pswp(Proc *a, Proc *b) {
    Proc t=*a;
    *a=*b;
    *b=t;
}
int prccmp(Proc a, Proc b) {
    if(a.prop>b.prop||a.prop==b.prop&&a.id<b.id) return 1;
    else return 0;
}
void iheaput(Proc n) {
    int _i, f;
    a[++cnt]=n;
    f=cnt;
    for(_i=cnt/2;_i>=1;_i/=2) {
        if(prccmp(a[f], a[_i])) {
            pswp(&a[_i], &a[f]);
        }
        else break;
        f=_i;        
    }
}
Proc oheaput() {
    int _i;
    Proc ret={}, trh={}, _t;
    if(cnt) {
        ret=a[1];
        a[1]=a[cnt];
        a[cnt--]=trh;
        for(_i=2;_i<=cnt;_i*=2) {
            if(prccmp(a[_i], a[_i/2])||(prccmp(a[_i+1], a[_i/2])&&(_i+1<=cnt))) {
                _t=a[_i/2];
                a[_i/2]=prccmp(a[_i],a[_i+1])||_i+1>cnt?a[_i]:a[_i+1];
                if(prccmp(a[_i],a[_i+1])||_i+1>cnt) a[_i]=_t;
                else a[++_i]=_t;
            }
            else break;
        }
    }
    return ret;
}
int main() {
    int T, n, t;
    scanf("%d %d", &T, &n);
    for(int i=0;i<n;i++) {
        Proc t;
        scanf("%d %d %d", &t.id, &t.time, &t.prop);
        iheaput(t);
    }
    for(int i=0;i<T;i++) {
        Proc t=oheaput();
        printf("%d\n", t.id);
        t.time--;
        t.prop--;
        if(t.time) {
            iheaput(t);
        }
    }
}