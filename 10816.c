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
int okaishimas(int a[], int now, int end) {
    int _i, _sum=0;
    for(_i=now;_i<end&&a[_i]==a[now];_i++) _sum++;
    for(_i=now-1;_i>=0&&a[_i]==a[now];_i--) _sum++;
    return _sum;
}
int main() {
    int n, m, i, t, dwn, mid, up, f=0, nm;
    scanf("%d", &n);
    int a[n], b[n], c[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        c[i]=1;
    }
    mergeSort(a, 0, n-1);
    for(i=0, nm=-1;i<n;i++) {
        if(!i||a[i]!=b[nm]) {
            b[++nm]=a[i];
        }
        else {
            c[nm]++;
        }
    }
    scanf("%d", &m);
    for(i=0;i<m;i++) {
        scanf("%d", &t);
        f=0;
        for(up=nm, dwn=0, mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
            if(b[mid]==t) {
                f=1; 
                printf("%d ", c[mid]);
                break;
            }
            else if(b[mid]<t) {
                dwn=mid+1;
            }
            else {
                up=mid-1;
            }
        }
        if(!f) printf("0 ");
    }
}