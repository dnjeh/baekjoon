#include <stdio.h>
#include <string.h>
int a[1000], b[510], full, half, un, _tind=1;
char _t[510][30];
int getNum(char* t) {
    for(int i=1;i<_tind;i++) {
        if(!strcmp(_t[i], t)) return i;
    }
    strcpy(_t[_tind++], t);
    return _tind-1;
}
int main() {
    int n, k, t, tt;
    char ct[30], ctt[30];
    scanf("%d %d", &n, &k);
    un=n;
    for(int i=0;i<k;i++) {
        scanf("%d %d %s %s", &t, &tt, ct, ctt);
        t--; tt--;
        if(!a[t]) {
            a[t]=getNum(ct);
            un--;
        }
        if(!a[tt]) {
            a[tt]=getNum(ctt);
            un--;
        }
        if(!strcmp(ct, ctt)) {
            a[t]=-1; a[tt]=-1;
        }
    }
    for(int i=0;i<n;i++) {
        if(a[i]>0) {
            b[a[i]]++;
            if(b[a[i]]==1) half++;
            else {
                half--; full++;
            }
        }
    }
    printf("%d", full+(half==un?half:0)+(half==0&&un==2?1:0));
}