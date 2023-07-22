#include <stdio.h>
int a[100000];
int abs(int t) { return t<0?t*-1:t; }
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(abs(L[i])<abs(R[j])||abs(L[i])==abs(R[j])&&L[i]<=R[i]) arr[k]=L[i++];
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
    int n, i, min[3], t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n-1);
    for(i=0;i<n-1;i++) {
        if(!i||(min[0]>abs(a[i]+a[i+1]))) {
            min[0]=abs(a[i]+a[i+1]);
            min[1]=a[i]; min[2]=a[i+1];
        }   
    }
    if(min[1]>min[2]) {
        t=min[1];
        min[1]=min[2];
        min[2]=t;
    }
    printf("%d %d", min[1], min[2]);
}