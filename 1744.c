#include <stdio.h>
#define REM -3001
int a[50], n;
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
    int i, j, max[3]={0, }, ans=0, left, up, dwn;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n-1);
    for(left=n, up=n-1, dwn=0;left>1&&up>=dwn;) {
        max[0]=REM;
        if(a[up]*a[up-1]>0&&a[up]*a[up-1]>=a[dwn]*a[dwn+1]&&a[up]!=a[up]*a[up-1]) {
            ans+=a[up]*a[up-1];
            a[up]=REM;
            a[up-1]=REM;
            up-=2;
            left-=2;
        }
        else if(a[up]==1) {
            ans+=a[up];
            a[up--]=REM;
            left--;
        }
        else if(a[dwn]*a[dwn+1]>=0&&a[dwn+1]<=0) {
            ans+=a[dwn]*a[dwn+1];
            a[dwn]=REM;
            a[dwn+1]=REM;
            dwn+=2;
            left-=2;
        }
        else {
            ans+=a[up];
            ans+=a[up-1];
            a[up]=REM;
            a[up-1]=REM;
            up-=2;
            left-=2;
        }
    }
    for(i=0;i<n;i++) {
        if(a[i]!=-3001) {
            ans+=a[i];
            break;
        }
    }
    printf("%d", ans);
}