#include <stdio.h>
int n, a[20][2], mem[25];
int dp(int t) {
    int ret=0, i, tt;
    if(mem[t]) ret=mem[t];
    else {
        for(i=t-1;i>=0;i--) {
            tt=dp(i);
            if(a[i][1]<a[t][1]&&(!ret||tt+1>ret)) {
                ret=tt+1;
            }
        }
        if(!ret) ret=1;
        mem[t]=ret;
    }
    return ret;
}

void merge(int arr[][2], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int L[n1][2], R[n2][2];
    for(i=0;i<n1;i++) { L[i][0]=arr[left+i][0]; L[i][1]=arr[left+i][1]; }
    for(j=0;j<n2;j++) { R[j][0]=arr[middle+1+j][0]; R[j][1]=arr[middle+1+j][1]; }
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i][0]<R[j][0]||(L[i][0]==R[j][0]&&L[i][1]<R[j][1])) { arr[k][0]=L[i][0]; arr[k][1]=L[i++][1]; } 
        else { arr[k][0]=R[j][0]; arr[k][1]=R[j++][1]; }
    }
    for(;i<n1;i++,k++) { arr[k][0]=L[i][0]; arr[k][1]=L[i][1]; }
    for(;j<n2;j++,k++) { arr[k][0]=R[j][0]; arr[k][1]=R[j][1]; }
}
 
void mergeSort(int arr[][2], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
int main() {
    int t, max=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    mergeSort(a, 0, n-1);
    for(int i=n-1;i>=0;i--) {
        t=dp(i);
        if(!max||t>max) max=t;
    }
    printf("%d", max);
}