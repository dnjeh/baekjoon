#include <stdio.h>
int a[50], n;
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
int main() {   
    int i, j, max[3]={0, }, ans=0, left;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    mergeSort(a, 0, n-1);
    for(left=n;left>1;) {
        max[0]=-3001;
        for(i=0;i<n-1;i++) {
            for(j=i+1;j<n;j++) {
                if(a[i]!=-3001&&a[j]!=-3001&&(a[i]*a[j]>max[0]||(a[i]*a[j]==max[0]&&(a[i]+a[j])))) {
                    max[0]=a[i]*a[j];
                    max[1]=i;
                    max[2]=j;
                }
            }
        }
        if((max[0]>0&&(a[max[1]]==1||a[max[2]]==1))||max[0]<0||(!max[0]&&!(a[max[1]]+a[max[2]]))) {
            ans+=a[max[1]];
            ans+=a[max[2]];
            a[max[1]]=-3001;
            a[max[2]]=-3001;
            left-=2;
        }
        else if(max[0]>0||(!max[0]&&a[max[1]]+a[max[2]]<0)) {
            ans+=max[0];
            a[max[1]]=-3001;
            a[max[2]]=-3001;
            left-=2;
        }
        else if(a[max[1]]+a[max[2]]>0) {
            if(a[max[1]]) {
                ans+=a[max[1]];
                a[max[1]]=-3001;
                left-=1;
            }
            else {
                ans+=a[max[2]];
                a[max[2]]=-3001;
                left-=1;
            }
        }
        else if(a[max[1]]+a[max[2]]<0) {
            if(a[max[1]]) {
                ans+=a[max[1]];
                a[max[1]]=-3001;
                left-=1;
            }
            else {
                ans+=a[max[2]];
                a[max[2]]=-3001;
                left-=1;
            }
        }
    }
    for(i=0;i<n;i++) {
        if(a[i]!=-3001) {
            ans+=a[i];
            break;
        }
    }
    printf("%d", ans);
}