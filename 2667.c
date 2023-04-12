#include <stdio.h>
int a[25][25], b[320], n;
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
void find(int _i, int _j, int cnt) {
    if(a[_i][_j]) {
        b[cnt]++;
        a[_i][_j]=0;
    }
    else return;
    if(_i>0) find(_i-1, _j, cnt);
    if(_j>0) find(_i, _j-1, cnt);
    if(_i<n-1) find(_i+1, _j, cnt);
    if(_j<n-1) find(_i, _j+1, cnt);
    return;
}
int main() {
    int i, j, k=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%1d", &a[i][j]);
    for(i=0;i<n;i++) for(j=0;j<n;j++) {
        if(a[i][j]) {
            find(i, j, k++);
        }        
    }
    printf("%d\n", k);
    mergeSort(b, 0, k-1);
    for(i=0;i<k;i++) printf("%d\n", b[i]);
}