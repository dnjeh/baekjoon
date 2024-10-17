#include <stdio.h>
#include <string.h>
char a[1010][105], *pa[1010];
void chmerge(char *arr[], int left, int middle, int right) {
    int i, j, k, _i;
    int n1 = middle-left+1;
    int n2 = right-middle;
    char *L[n1], *R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(strcmp(L[i], R[j])<0) arr[k]=L[i++];
        else arr[k]=R[j++]; 
    }
    for(;i<n1;i++,k++) arr[k]=L[i];
    for(;j<n2;j++,k++) arr[k]=R[j];
}
void chmergeSort(char *arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        chmergeSort(arr, left, middle);
        chmergeSort(arr, middle + 1, right);
        chmerge(arr, left, middle, right);
    }
}
int main() {
    char t;
    int n;
    scanf("%d %d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", a[i]);
        for(int j=0, k=strlen(a[i])-1;j<k;j++, k--) {
            t=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=t;
        }
        pa[i]=a[i];
    }
    chmergeSort(pa, 0, n-1);
    for(int i=0;i<n;i++) printf("%s\n", pa[i]); 
}