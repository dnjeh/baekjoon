#include <stdio.h>
int a[4][4000], l[16001000], r[16001000], lind, rind, n;

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

int ubs(int end, int dwn, int up, int* a) {
    int mid;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int lbs(int end, int dwn, int up, int* a) {
    int mid;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}

int main() {
    int i, j;
    long long int cnt=0, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        for(j=0;j<4;j++) {
            scanf("%d", &a[j][i]);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            l[lind++]=a[0][i]+a[1][j];
        }
    } mergeSort(l, 0, lind-1);  
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            r[rind++]=a[2][i]+a[3][j];
        }
    } mergeSort(r, 0, rind-1);  
    for(i=0;i<lind;i++) {
        t=(long long int)ubs(-l[i], 0, rind, r)-(long long int)lbs(-l[i], 0, rind, r);
        cnt+=t;
    }
    printf("%lld", cnt);
}