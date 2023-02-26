#include <stdio.h>
int a[5][5];
int bingo() {
    int _sum=0, _i, _j, _tsum[4]={0, };
    for(_i=0;_i<5;_i++) {
        _tsum[0]=_tsum[1]=0;
        for(_j=0;_j<5;_j++) {  
            _tsum[0]+=a[_i][_j];
            _tsum[1]+=a[_j][_i];
            if(_i==_j) _tsum[2]+=a[_i][_j];
            if(_i+_j==4) _tsum[3]+=a[_i][_j];
        }
        if(!_tsum[0]) _sum++;
        if(!_tsum[1]) _sum++;
    }
    if(!_tsum[2]) _sum++;
    if(!_tsum[3]) _sum++;
    return _sum>=3?0:1;
}
int main() {
    int b[26], t, i, j;
    for(i=0;i<25;i++) {
        scanf("%d", &a[i/5][i%5]);
        b[a[i/5][i%5]]=i;
    } 
    for(i=0;bingo();i++) {
        scanf("%d", &t);
        a[b[t]/5][b[t]%5]=0;
    }
    printf("%d", i);
}