#include <stdio.h>
int a[200000];
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i]>=R[j]) arr[k]=L[i++];
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
int main() {
    int n, max, t=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n-1);
    max=a[0];
    for(int i=0;i<n;i++) {
        t=((a[i]+t)%1000000007+t)%1000000007;
    }
    printf("%d", (max+t-a[0])%1000000007);
}