#include <stdio.h>
int a[100][100], n, m, b[6000], cnt;
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
void find(int y, int x) {
    a[y][x]=1;
    b[cnt]++;
    if(y+1<n&&!a[y+1][x]) find(y+1, x);
    if(y-1>=0&&!a[y-1][x]) find(y-1, x);
    if(x+1<m&&!a[y][x+1]) find(y, x+1);
    if(x-1>=0&&!a[y][x-1]) find(y, x-1);
}
int main() {
    int i, k, tx, ty, ttx, tty, j, jj;
    scanf("%d %d %d", &n, &m, &k);
    for(i=0;i<k;i++) { 
        scanf("%d %d %d %d", &tx, &ty, &ttx, &tty);
        for(j=ty;j<tty;j++) {
            for(jj=tx;jj<ttx;jj++) {
                a[j][jj]=1;
            }
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(!a[i][j]) {
                find(i, j);
                cnt++;
            }
        }
    }
    mergeSort(b, 0, cnt-1);
    printf("%d\n", cnt);
    for(i=0;i<cnt;i++) printf("%d ", b[i]);
}