#include <stdio.h>

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

int main() {
    long long int n, i, t;
    scanf("%lld", &n);
    long long int a[n];
    for(i=0;i<n;i++) {
        scanf("%lld %lld", &a[i], &t);
        a[i]+=(100000+(t+100000)*1000000);
    }
    mergeSort(a, 0, n-1);
    for(i=0;i<n;i++) {
        printf("%d %d\n", (a[i]%1000000-100000), (a[i]/1000000-100000));
    }
}