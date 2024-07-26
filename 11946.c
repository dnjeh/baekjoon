#include <stdio.h>
#include <string.h>
void merge(int arr[][3], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    int L[n1][3], R[n2][3];
    for(i=0;i<n1;i++) { L[i][0]=arr[left+i][0]; L[i][1]=arr[left+i][1]; L[i][2]=arr[left+i][2]; }
    for(j=0;j<n2;j++) { R[j][0]=arr[middle+1+j][0]; R[j][1]=arr[middle+1+j][1]; R[j][2]=arr[middle+1+j][2]; }
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i][1]>R[j][1]||(L[i][1]==R[j][1]&&L[i][2]<R[j][2])||(L[i][1]==R[j][1]&&L[i][2]==R[j][2])) { arr[k][0]=L[i][0]; arr[k][2]=L[i][2]; arr[k][1]=L[i++][1]; } 
        else { arr[k][0]=R[j][0]; arr[k][2]=R[j][2]; arr[k][1]=R[j++][1]; }
    }
    for(;i<n1;i++,k++) { arr[k][0]=L[i][0]; arr[k][1]=L[i][1]; arr[k][2]=L[i][2]; }
    for(;j<n2;j++,k++) { arr[k][0]=R[j][0]; arr[k][1]=R[j][1]; arr[k][2]=R[j][2]; }
}
 
void mergeSort(int arr[][3], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
int main() {
    int n, m, q, time, team, test;
    int a[101][17] = {{0, },}, b[100][3];
    char t[5];
    scanf("%d %d %d", &n, &m, &q);
    for(int i=0;i<q;i++) {
        scanf("%d %d %d %s", &time, &team, &test, t);
        if(strcmp(t, "AC")&&a[team][test]<=0) {
            a[team][test]-=1;
        }
        else if(!strcmp(t, "AC")&&a[team][test]<=0) {
            a[team][test]*=-20;
            a[team][test]+=time+1;
            a[team][16]+=a[team][test]-1;
            a[team][0]++;
        }
    }
    for(int i=1;i<=n;i++) {
        b[i-1][0]=i;
        b[i-1][1]=a[i][0];
        b[i-1][2]=a[i][16];
    }
    mergeSort(b, 0, n-1);
    for(int i=0;i<n;i++) {
        printf("%d %d %d\n", b[i][0], b[i][1], b[i][2]);
    }
}