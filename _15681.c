#include <stdio.h>
int mem[100010], q
int a[200050], ind;
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
int ubs(int end) {
    int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int lbs(int end) {
    int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int dfs(int to) {
    int ret=0;
    if(mem[to]!=-1) ret=mem[to];
        else {
        int i, sta=lbs(to*FIVE), end=lbs((to+1)*FIVE);
        vis[to]=id;
        for(i=sta;i<end;i++) {
            if(vis[a[i]%FIVE]!=id) {
                ret+=dfs(a[i]%FIVE)+1;
            }
        }
        mem[to]=ret;
    }
    return ret;
}
int main() {
    

    qsort(a, ind, sizeof(int), compare);
}