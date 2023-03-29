#include <stdio.h>
#include <string.h>
char a[500000][21], a1[500000][21], *b[500000], *pa[500000], *pa1[500000];
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
    int n, m, i, j;
    int up, dwn, mid, ter;
    scanf("%d %d", &n, &m);
    //char a[n][21], a1[m][21], *b[n>m?n:m], *pa[n], *pa1[m];
    for(i=0;i<n;i++) {
        scanf("%s", a[i]);
        pa[i]=a[i];
    }
    chmergeSort(pa, 0, n-1);
    for(i=0;i<m;i++) {
        scanf("%s", a1[i]);
        pa1[i]=a1[i];
    }
    chmergeSort(pa1, 0, m-1);
    for(i=0, j=0;i<m;i++) for(up=n-1, dwn=0, mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
        if(!(ter=strcmp(pa1[i], pa[mid]))) { b[j++]=pa[mid]; break; }
        else if(ter<0) up=mid-1;
        else dwn=mid+1;
    }
    printf("%d\n", j);
    for(i=0;i<j;i++) printf("%s\n", b[i]); 
}