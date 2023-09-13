#include <stdio.h>
int a[3][30101], aa[2][30100], mem[30100][3010], q[30300];
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
    for(i=0;i<=aaind;i++) {
        for(j=0;j<=k;j++) {
            if(!i||!j) mem[i][j]=0;
            else if (aa[0][i-1]<=j) {
                mem[i][j]=max(aa[1][i-1]+mem[i-1][j-aa[0][i-1]], mem[i-1][j]);
            } 
            else {
                mem[i][j]=mem[i-1][j];
            }
        }
    }
    return mem[aaind][k];
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
    int i, j, t1, t2;
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
        a[1][t1]+=a[1][t2];
        a[2][t1]+=a[2][t2];
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