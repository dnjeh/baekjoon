#include <stdio.h>
#include <stdlib.h>
long long int a[5000], min=4000000000, mina[3], n;
void merge(long long int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    long long int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i]<R[j]||L[i]==R[j]&&L[i]<=R[i]) arr[k]=L[i++];
        else arr[k]=R[j++];
    }
    for(;i<n1;i++,k++) arr[k]=L[i];
    for(;j<n2;j++,k++) arr[k] = R[j];
}
void mergeSort(long long int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
int main() {
    int up, dwn, i;
    long long int t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%lld", &a[i]);
    }
    mergeSort(a, 0, n-1);
    for(i=0;i<n;i++) {
        for(dwn=0, up=n-1;dwn<up&&dwn<n;) {
            if(dwn==i) dwn++;
            else if(up==i) up--;
            else {
                t=(long long int)a[i]+(long long int)a[up]+(long long int)a[dwn];
                if(llabs(t)<min) {
                    min=llabs(t);
                    mina[1-1]=a[i];
                    mina[2-1]=a[up];
                    mina[3-1]=a[dwn];
                }
                if(t<0) dwn++;
                else up--;
            }
        }
    }
    mergeSort(mina, 0, 2);
    printf("%lld %lld %lld", mina[1-1], mina[2-1], mina[3-1]);
}
