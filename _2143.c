#include <stdio.h>
int s[2][1000];
int n[2], t;
int abs(int t) { return t<0?t*-1:t; }
void merge(int arr[], int left, int middle, int right);
void mergeSort(int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
int bs(int start, int end) {
    
}
int main() {
    int i, j, tt, cnt=0;
    scanf("%d", &t);
    for(i=0;i<2;i++) {
        scanf("%d", &n[i]);
        for(j=0;j<n[i];j++) {
            scanf("%d", &tt);
            s[i][j]+=tt+j?s[i][j-1]:0;
        }
        mergeSort(s[i], 0, n[i]-1);
    }   
    for(i=0;i<n[0];i++) {
        cnt+=bs(s[0][i], t-s[0][i]);
    }
    printf("%d", cnt);
}
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