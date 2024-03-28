#include <stdio.h>
int a[100100];

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

int main() {
    int n, x, cnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }   
    scanf("%d", &x);
    mergeSort(a, 0, n-1);
    for(int left=0, right=n-1;left<right;) {
        if(a[left]+a[right]==x) {
            cnt++;
            right--;
        }
        else if(a[left]+a[right]<x) left++;
        else right--;
    }
    printf("%d", cnt);
}