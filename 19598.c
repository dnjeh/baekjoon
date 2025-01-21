#include <stdio.h>
#include <stdlib.h>
int a[100100], b[100000][2], cnt;
int compare(const void* a, const void* b) {
    int t=(*(int(*)[2])a)[0]-(*(int(*)[2])b)[0];
    if(t) return t;
    return (*(int(*)[2])a)[1]-(*(int(*)[2])b)[1];
}
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
int main() {
    int n, ans=1;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &b[i][j]);
        }
    }
    qsort(b, n, sizeof(b[0]), compare);
    iheaput(b[0][1]);
    for(int i=1;i<n;i++) {
        int t=oheaput(), n0w=b[i][0], n1w=b[i][1];
        if(t>n0w) {
            ans++;
            iheaput(t);
        }
        iheaput(n1w);
    }
    printf("%d", ans);
}