#include <stdio.h>
int aa[100000];
long long int bb[100000];
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
    long long int t=0;
    int n, b, a, cnt;
    scanf("%d %d %d", &n, &b, &a);
    for(int i=0;i<n;i++) {
        scanf("%d", &aa[i]);
    }
    mergeSort(aa, 0, n-1);
    for(int i=0;i<n;i++) {
        bb[i]=aa[i];
        if(i) bb[i]+=bb[i-1];
    }
    for(cnt=0;cnt<n;cnt++) {
        t=bb[cnt]/2;
        if(cnt>=a) t+=bb[cnt-a]/2;
        if(t>(long long int)b) break;
    }
    printf("%d", cnt);
}