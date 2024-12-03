#include <stdio.h>
long long int a[2][100010], q[2][100100], n, m;
void set();
long long int find(long long int t) {
    long long int ind=1, i, ret, ret2=0, sum;
    q[0][0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=a[0][q[i]]) {
            q[ind++]=a[0][q[i]];
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) a[q[i]]=ret;
    return ret2*1000000+ret;
}
int main() {
    long long int i, j, t1, t2, t3, t4, t5;
    char mod;
    for(scanf("%lld %lld", &n, &m);!n||!m;scanf("%lld %lld", &n, &m);) {
        set();   
        for(i=0;i<m;i++) {
            scanf(" %c %lld %lld", &mod, &t1, &t2);
            if(mod=='!') {
                scanf("%lld", &t5);
                t1=find(t1); t2=find(t2);
                t3=t1/1000000; t1%=1000000;
                t4=t2/1000000; t2%=1000000;
                if(t1>t2) {
                    a[0][t1]=t2;
                    a[1][t1]=t5+t3;
                }
                else {
                    a[0][t2]=t1;
                    a[1][t2]=t4-t5
                }
            }
            else {
                t1=find(t1); t2=find(t2);
                t3=t1/1000000-t2/1000000;
                t1%=1000000; t2%=1000000;
                if(t1!=t2) printf("%lld\n", t3);
                else printf("UNKNOWN\n");
            }
        }
    }
}

void set() {
    int i;
    for(i=0;i<=n;i++) {
        a[0][i]=i;
        a[1][i]=0;
    }
}
