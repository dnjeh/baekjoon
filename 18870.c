#include <stdio.h>
int a[1000000][2], *a1[1000000];
void merge(int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int *L[n1], *R[n2];
    for(i=0;i<n1;i++) L[i]=a1[left+i];
    for(j=0;j<n2;j++) R[j]=a1[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(*L[i]<=*R[j]) a1[k]=L[i++];
        else a1[k]=R[j++];
    }
    for(;i<n1;i++,k++) a1[k]=L[i];
    for(;j<n2;j++,k++) a1[k]=R[j];
}
void mergeSort(int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(left, middle);
        mergeSort(middle + 1, right);
        merge(left, middle, right);
    }
}
int main() {
    int n, i, cnt=-1, t;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i][0]);
        a1[i]=&a[i][0];
    }
    mergeSort(0, n-1);
    for(i=0;i<n;i++) {
        if(!i||t!=*a1[i]) cnt++;
        *(a1[i]+1)=cnt;
        t=*a1[i];
    }
    for(i=0;i<n;i++) printf("%d ", a[i][1]);
}