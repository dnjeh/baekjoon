#include <stdio.h>
#define FIVE 10000
int n, m, a[100100], b[10100], vis[10000], mem[10000], bmax, bind, ind, id;
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i]<=R[j]) arr[k]=L[i++];
        else arr[k]=R[j++];
    }
    for(;i<n1;i++,k++) arr[k]=L[i];
    for(;j<n2;j++,k++) arr[k] = R[j];
}
void mergeSort(int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
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
void set();
int main() {
    int i;
    int t, tt;
    scanf("%d %d", &n, &m);
    set();
    for(i=0;i<m;i++) {
        scanf("%d %d", &t, &tt);
        tt--; t--;
        a[ind++]=tt*FIVE+t;
    }
    mergeSort(a, 0, ind-1);
    for(i=0;i<n;i++) {
        id++;
        if((t=dfs(i))>bmax) {
            bmax=t;
            bind=0;
            b[bind++]=i+1;
        }
        else if(t==bmax) {
            b[bind++]=i+1;
        }
    }
    for(i=0;i<bind;i++) {
        printf("%d ", b[i]);
    }
}
void set() {
    int i;
    for(i=0;i<n;i++) {
        mem[i]=-1;
    }
}