#include <stdio.h>
#include <string.h>
void chmerge(char *arr[], int left, int middle, int right) {
    int i, j, k, _i, len1, len2, n3;
    int n1 = middle-left+1;
    int n2 = right-middle;
    char *L[n1], *R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        len1=strlen(L[i]); len2=strlen(R[j]); 
        if(len1<len2) arr[k]=L[i++];
        else if(len2<len1) arr[k]=R[j++];
        else for(_i=0;_i<len1;_i++) {
            if((*(L[i]+_i)<*(R[j]+_i))) {
                arr[k]=L[i++];
                break;
            }
            else if(*(L[i]+_i)>*(R[j]+_i)||_i+1==len1) {
                arr[k]=R[j++];
                break;
            }
        }
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
    int n, i;
    scanf("%d", &n);
    char a[n][51], *b[n];
    for(i=0;i<n;i++) {
        scanf("%s", a[i]);
        b[i]=a[i];
    }
    chmergeSort(b, 0, n-1);
    for(i=0;i<n;i++) {
        if(!i||strcmp(b[i-1], b[i])) printf("%s\n", b[i]);
    }
}