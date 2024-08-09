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
    long long int sum=0;
    int a[1000] = {0, }, n, g, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &g);
        for(int j=0;j<g;j++) {
            scanf("%d", &a[j]);
        }
        mergeSort(a, 0, g-1);
        for(int j=0;j<g;j+=2) {
            if(j+1>=g||a[j]!=a[j+1]) {
                printf("Case #%d: %d\n", i+1, a[j]);
                break;
            }
        }
    }   
}