#include <stdio.h>
int s[2][1010], ss[2][505000], ind[2];
int n[2], t;
void merge(int arr[], int left, int middle, int right);
void mergeSort(int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
long long int ubs(int end) {
    long long int up, dwn, mid;
    up=ind[1]; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(ss[1][mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
long long int lbs(int end) {
    long long int up, dwn, mid;
    up=ind[1]; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(ss[1][mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int main() {
    long long int i, j, jj, tt, cnt=0;
    scanf("%d", &t);
    for(i=0;i<2;i++) {
        scanf("%d", &n[i]);
        for(j=0;j<n[i];j++) {
            scanf("%lld", &tt);
            s[i][j]+=tt+(j?s[i][j-1]:0);
        }
        for(j=0;j<n[i];j++) {
            for(jj=j;jj<n[i];jj++) {
                ss[i][ind[i]++]=s[i][jj]-(j?s[i][j-1]:0);
            }
        }
    }
    mergeSort(ss[1], 0, ind[1]-1);
    for(i=0;i<ind[0];i++) {
        cnt+=ubs(t-ss[0][i])-lbs(t-ss[0][i]);
    }
    printf("%lld", cnt);
}
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i]<R[j]) arr[k]=L[i++];
        else arr[k]=R[j++];
    }
    for(;i<n1;i++,k++) arr[k]=L[i];
    for(;j<n2;j++,k++) arr[k]=R[j];
}
