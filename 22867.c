#include <stdio.h>
#include <stdlib.h>
int a[100000][2], b[100001], bcnt;
int compare(const void* a, const void* b) {
    return (*(int(*)[2])a)[0]-(*(int(*)[2])b)[0];
}
void iheaput(int n) {
    int _i, _t, f;
    b[++bcnt]=n;
    f=bcnt;
    for(_i=bcnt/2;_i>=1;_i/=2) {
        if(b[f]<b[_i]) {
            _t=b[_i];
            b[_i]=b[f];
            b[f]=_t;
        }
        else break;
        f=_i;        
    }
}
int oheaput() {
    int _fin, _i, _t;
    if(!bcnt) _fin=-1;
    else {
        _fin=b[1];
        b[1]=b[bcnt];
        b[bcnt--]=0;
        for(_i=2;_i<=bcnt;_i*=2) {
            if(b[_i/2]>b[_i]||(b[_i/2]>b[_i+1]&&(_i+1<=bcnt))) {
                _t=b[_i/2];
                b[_i/2]=b[_i]<b[_i+1]||_i+1>bcnt?b[_i]:b[_i+1];
                if(b[_i]<b[_i+1]||_i+1>bcnt) b[_i]=_t;
                else b[++_i]=_t;
            }
            else break;
        }
    }
    return _fin;
}
int main() {
    int n, h, m, s, ss, max=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%02d:%02d:%02d.%03d", &h, &m, &s, &ss);
            a[i][j]=h*60*60*1000+m*60*1000+s*1000+ss;
        }
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int i=0;i<n;i++) {
        int t=oheaput();
        if(t!=-1&&t>a[i][0]) {
            iheaput(t);
        }
        iheaput(a[i][1]);
        if(bcnt>max) max=bcnt;
    }
    printf("%d", max);
}
