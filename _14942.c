#include <stdio.h>
#define SIX 1000000
#define FIV 100000
int a[100100], b[100001], n, ind;
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
int main() {
    int t, tt, ttt;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n-1;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        a[ind++]=t*SIX*FIV+tt*FIV;
    }
    mergeSort(a, 0, ind-1);
    
}