#include <stdio.h>
int isit(int n) {
    int _i, _sum=0, _tsum=0, _j, _t=0, _tt=0;
    for(_i=1;_i<n;_i++) { //n의 모든 약수를 훑는다       
        if(!(n%_i)&&_t!=_i) {     //_i가 n의 약수(면서 전과 다른 약수)라면
            _sum+=_i;     //임시합에 약수를 더한 뒤
            _t=_i;
            _tt=_tsum=0; 
            for(_j=1;_j<_i;_j++) {  //그 약수의 약수를 구한다
                if(!(_i%_j)&&_tt!=_j) {      //그 약수의 그그약수를 임시임시합에 더한다
                    _tt=_j;
                    _tsum+=_j;
                }
            }
            if(_tsum>_i) {          //만약 임시임시합이 그약수보다 크면
                return 0;           // 거짓을 고한다
            }
        }
    }
    if(_sum>n) {                    //n보다 임시합이 크면
        return 1;                   // 참을 고하며,
    }
    else {
        return 0;                   //아닐시 거짓을 고한다.
    }
}
int main() {
    int n, i, T, j;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d", &n);
        if(isit(n)) {
            printf("Good Bye\n");
        }
        else {
            printf("BOJ 2022\n");
        }
    }
}