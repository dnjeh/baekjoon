#include <stdio.h>
int n, m;
int p[100000], ind;
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
int ubs(int end) {
    int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(p[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int lbs(int end) {
    int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(p[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int q[1100], qind, ide[1001];
int topsort() {
    int i, j, sta, end;
    for(i=0;i<qind;i++) {
        sta=lbs(q[i]*1001), end=lbs((q[i]+1)*1001);
        for(j=sta;j<end;j++) {
            ide[p[j]%1001]--;
            if(!ide[p[j]%1001]) {
                q[qind++]=p[j]%1001;
            }
        }
    }
    if(qind==n) return 0;
    else return 1;
}
int main() {
    int i, j, t, tt, nm;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++) {
        scanf("%d", &nm);
        for(j=0;j<nm;j++) {
            scanf("%d", &t);
            if(j) {
                p[ind++]=tt*1001+t;
                ide[t]++;
            }
            tt=t;
        }
    }
    mergeSort(p, 0, ind-1);
    for(i=1;i<=n;i++) {
        if(!ide[i]) q[qind++]=i;
    }
    if(topsort()) printf("0");
    else {
        for(i=0;i<n;i++) {
            printf("%d\n", q[i]);
        }
    }
}