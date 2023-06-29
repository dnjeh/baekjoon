#include <stdio.h>
#include <string.h>

int n, cnt;
char *pa[50], a[50][51];
void chmerge(char *arr[], int left, int middle, int right) {
    int i, j, k, _i, len1, len2, n3;
    int n1 = middle-left+1;
    int n2 = right-middle;
    char *L[n1], *R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        int len1=strlen(L[i]); len2=strlen(R[j]); 
        if(len1>len2) arr[k]=L[i++];
        else if(len2>len1) arr[k]=R[j++];
        else {
            if(strcmp(L[i], R[j])>0) arr[k]=L[i++];
            else arr[k]=R[j++]; 
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
int check(char arr[], char brr[]) {
    int len=strlen(arr);
    for(int i=0;i<len;i++) {
        if(arr[i]!=brr[i]) return 0;
    }
    return 1;
}
int main() {
    int i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", a[i]);
        pa[i]=a[i];
    }
    chmergeSort(pa, 0, n-1);
    for(i=0;i<n;i++) {
        for(j=0;j<i;j++) {
            if(check(pa[i], pa[j])) break;
        }
        if(j==i) cnt++;
    }
    printf("%d", cnt);
}