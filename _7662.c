#include <stdio.h>
int min[1000001], minq[1000100], minc=0, ista=0;
int max[1000001], maxq[1000100], maxc=0, asta=0;
void iminput(int n) {
    int _i, _t, f;
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
int ominput() {
    int _fin, _i, _t;
    if(!minc) _fin=0;
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
    return _fin;
}
void imaxput(int n) {
    int _i, _t, f;
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
int omaxput() {
    int _fin, _i, _t;
    if(!maxc) _fin=0;
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
    return _fin;
}
int main() {
    char m;
    int n, t, i, j, T, tt;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        ista=asta=maxc=minc=0;
        scanf("%d", &n);
        for(j=0;j<n;j++) {
            scanf("%c %d", &m, &t);
            if(m=='I') {
                iminput(t);
                imaxput(t);
            }
            else {
                if(t==-1&&minc>0) {
                    while(ista>0&&(tt=ominput())==minq[ista-1]) {
                        ista--;
                    }
                    maxq[asta++]=tt;
                }
                else if(maxc>0) {
                    while(asta>0&&(tt=omaxput())==maxq[asta-1]) {
                        asta--;
                    }
                    minq[ista++]=tt;
                }
            }
        }
        while(ista>0&&(tt=ominput())==minq[ista-1]) {
            ista--;
        }
        while(asta>0&&(tt=omaxput())==maxq[asta-1]) {
            asta--;
        }
        
    }
}