#include <stdio.h>
long long int n, a[200000], ans[100000], ind;
void merge(long long int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    long long int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i]<=R[j]) arr[k]=L[i++];
        else arr[k]=R[j++];
    }
    for(;i<n1;i++,k++) arr[k]=L[i];
    for(;j<n2;j++,k++) arr[k] = R[j];
}
void mergeSort(long long int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
long long int ubs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
long long int lbs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
void dfs(long long int to, long long int from) {
    //printf("%lld %lld\n", to, from);
    if(from>=0) ans[to]=from;
    long long int i, sta=lbs(to*1000000), end=lbs((to+1)*1000000);
    for(i=sta;i<end;i++) {
        if(a[i]%1000000LL!=from) dfs(a[i]%1000000LL, to);
    }
}
int main() {
    int i;
    long long int t, tt;
    scanf("%d", &n);
    for(i=1;i<n;i++) {
        scanf("%lld %lld", &t, &tt);
        t--; tt--;
        a[ind++]=t*1000000LL+tt;
        a[ind++]=tt*1000000LL+t;
    }
    mergeSort(a, 0, ind-1);
    dfs(0, 0);
    for(i=1;i<n;i++) {
        printf("%lld\n", ans[i]+1);
    }
}