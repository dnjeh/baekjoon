#include <stdio.h>
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
    int n, m, i, t, dwn, mid, up, f=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);
    mergeSort(a, 0, n-1);
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        scanf("%d", &t);
        f=0;
        for(up=n-1, dwn=0, mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
            if(a[mid]==t) {
                f=1; 
                break;
            }
            else if(a[mid]<t) {
                dwn=mid+1;
            }
            else {
                up=mid-1;
            }
        }
        if(f) printf("1\n");
        else printf("0\n");
    }
}