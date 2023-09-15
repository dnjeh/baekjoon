#include <stdio.h>
int a[3][30101], aa[2][30100], mem[3010], q[30300];
int n, m, k, aaind; //학생 수, 경로 수, 최대 무게
void cha(int* a, int* b) { //change
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int max(int a, int b) { return a>b?a:b; }
int dp() { //backsnap
    int i, j;
    for(i=0;i<=aaind;i++) { //집합 만큼 반복
        for(j=k;j-aa[0][i]>=0;j--) { //최대 한계부터, 원래의 가방에 넣을 수 있는 미래까지 반복
            mem[j]=max(mem[j], mem[j-aa[0][i]]+aa[1][i]); //원래 있는 것 vs 원래의 가방에 이것만 넣는 것
        }
    }
    return mem[k];
}
void set();
int find(int t) { //union-find -> find
    int ind=1, i, ret;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=a[0][q[i]]) {
            q[ind++]=a[0][q[i]];
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) a[0][q[i]]=ret;
    return ret;
}
int main() {
    int i, j, t1, t2, t;
    scanf("%d %d %d", &n, &m, &k);
    k--;
    set();
    for(i=1;i<=n;i++) {
        scanf("%d", &a[1][i]);
    }
    for(i=0;i<m;i++) {
        scanf("%d %d", &t1, &t2);
        t1=find(t1); t2=find(t2);
        if(t1>t2) cha(&t1, &t2);
        a[0][t2]=t1;
    }
    for(i=1;i<=n;i++) {
        if(i!=(t=find(i))) {
            a[1][t]+=a[1][i];
            a[2][t]+=a[2][i];
        }
    }
    for(i=1;i<=n;i++) {
        if(i==find(i)) {
            aa[0][aaind]=a[2][i];
            aa[1][aaind++]=a[1][i];
        }
    }
    printf("%d", dp());
}
void set() {
    int i, j;
    for(i=1;i<=n;i++) {
        a[0][i]=i;
        a[2][i]=1;
    }
}