#include <stdio.h>
int a[200001], q[100100], n, m;
long long int b[200001];
void set();
int find(int t) {
    int ind=1, i, ret;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=a[q[i]]) {
            q[ind++]=a[q[i]];
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) a[q[i]]=ret;
    return ret;
}
int main() {
    int t1, t2;
    long long int mul=1;
    scanf("%d %d", &n, &m); set();   
    for(int i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        t1=find(t1); t2=find(t2);
        if(t1>t2) {
            b[t2]+=b[t1];
            b[t1]=0;
            a[t1]=t2;
        }
        else {
            b[t1]+=b[t2];
            b[t2]=0;
            a[t2]=t1;
        }
    }
    for(int i=1;i<=n;i++) {
        if(b[i]) {
            mul=(mul*b[i])%1000000007;
        }
    }
    printf("%lld", mul);
}

void set() {
    int i;
    for(i=1;i<=n;i++) {
        a[i]=i;
        b[i]=1;
    }
}