#include <stdio.h>
#include <stdlib.h>
int a[20], b[10100], cnt=0;
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
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
    if(!cnt) _fin=-1;
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
    int n, m, ans=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    qsort(b, n, sizeof(int), compare);
    for(int i=0;i<m;i++) {
        iheaput(0);
    }
    for(int i=0;i<n;i++) {
        int t=oheaput();
        iheaput(t+b[i]);
    }
    for(int i=0;i<m;i++) {
        int t;
        if(ans<(t=oheaput())) ans=t;
    }
    printf("%d", ans);
}