#include <stdio.h>
#include <string.h>
int a1[100000]; 
char *pa[100000], a[100000][21];
void chimerge(char *arr[], int irr[], int left, int middle, int right) {
    int i, j, k, _i, len1, len2, n3;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int iL[n1], iR[n2]; char *L[n1], *R[n2];
    for(i=0;i<n1;i++) { L[i]=arr[left+i]; iL[i]=irr[left+i]; }
    for(j=0;j<n2;j++) { R[j]=arr[middle+1+j]; iR[j]=irr[middle+1+j]; }
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(strcmp(L[i], R[j])<0) { arr[k]=L[i]; irr[k]=iL[i++]; }
        else { arr[k]=R[j]; irr[k]=iR[j++]; }
    }
    for(;i<n1;i++,k++) { arr[k]=L[i]; irr[k]=iL[i]; }
    for(;j<n2;j++,k++) { arr[k]=R[j]; irr[k]=iR[j]; }
}
void chimergeSort(char *arr[], int irr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        chimergeSort(arr, irr, left, middle);
        chimergeSort(arr, irr, middle + 1, right);
        chimerge(arr, irr, left, middle, right);
    }
}
int main() {
    int n, m, i, ter, j, up, dwn, mid, tt;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) a1[i]=i;
    char t[21];
    for(i=0;i<n;i++) {
        scanf("%s", a[i]);
        pa[i]=a[i];
    }
    chimergeSort(pa, a1, 0, n-1);
    for(i=0;i<m;i++) {
        scanf("%s", t);
        if(t[0]<58&&t[0]>=48) {
            for(ter=0, j=0;t[j];j++, ter*=10) ter+=t[j]-48;
            printf("%s\n", a[ter/10-1]);
        }
        else {
            for(up=n-1, dwn=0, mid=(dwn+up)/2;dwn<=up;mid=(dwn+up)/2) {
                if(!(ter=strcmp(t, pa[mid]))) { printf("%d\n", a1[mid]+1); break; }
                else if(ter<0) up=mid-1;
                else dwn=mid+1;
            }
        }
    }
}