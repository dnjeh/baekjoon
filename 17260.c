#include <stdio.h>
long long int n, a[400100], ind, f, b[200100];
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
    for(;j<n2;j++,k++) arr[k]=R[j];
}
void mergeSort(long long int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
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
void dfs(long long int to, long long int from, long long int h) {
    if(h>=10000000) return;
    long long int sta=lbs(to*1000000), end=lbs((to+1)*1000000);
    for(long long int i=sta;i<end;i++) {
        long long int will=a[i]%1000000;
        if(will==from) continue;
        if(b[will]>=h) f=1;
        else dfs(will, to, h*2-b[will]);
    }
}
int main() {
    int k;
    long long int t, tt;
    scanf("%d %d", &n, &k);
    k--;
    for(int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n-1;i++) {
        scanf("%lld %lld", &t, &tt);
        t--; tt--;
        a[ind++]=t*1000000+tt;
        a[ind++]=tt*1000000+t;
    }
    mergeSort(a, 0, ind-1);
    dfs(k, -1, b[k]);
    printf("%d", f);
}
