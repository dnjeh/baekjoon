#include <stdio.h>
#define MAX 100000100
long long int q[MAX], qind=1;
void qput(long long int t) {
    q[qind%MAX]=t;
    qind++;
}
int main() {
    long long int t, i, cnt, ind=0;
    scanf("%lld", &q[0]);
    for(cnt=i=0;ind<qind;cnt++) {
        //if(qind-ind>=MAX) {
        //    printf("error!");
        //    return 1;
        //}
    for(ind=qind;i<ind;i++) {
        if(q[i%MAX]==1) {
            printf("%lld", cnt);
            return 0;
        }
        else {
            if(!(q[i%MAX]%3)) qput(q[i%MAX]/3); 
            if(!(q[i%MAX]%2)) qput(q[i%MAX]/2); 
            if(q[i%MAX]-1>0) qput(q[i%MAX]-1); 
        }
    }
    }
}