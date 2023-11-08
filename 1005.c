#include <stdio.h>
#define INF 2000000000
int n, m, ansi;
int a[1001], mem[1001], p[501000], ind;
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
int q[32010], qind, ide[32001];
void topsort() {
    int i, j, sta, end;
    for(i=0;i<qind;i++) {
        sta=lbs(q[i]*10000), end=lbs((q[i]+1)*10000);
        for(j=sta;j<end;j++) {
            if(mem[p[j]%10000]<mem[q[i]]+a[q[i]]) mem[p[j]%10000]=mem[q[i]]+a[q[i]];
            ide[p[j]%10000]--;
            if(!ide[p[j]%10000]) {
                q[qind++]=p[j]%10000;
            }
        }
    }
}
void set();
int main() {
    int i, j, T, t, tt;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &n, &m);
        set();
        for(j=1;j<=n;j++) {
            scanf("%d", &a[j]);
        }
        for(j=0;j<m;j++) {
            scanf("%d %d", &t, &tt);
            p[ind++]=t*10000+tt;
            ide[tt]++;
        }
        scanf("%d", &ansi);
        mergeSort(p, 0, ind-1);
        for(j=1;j<=n;j++) {
            if(!ide[j]) q[qind++]=j;
        }
        topsort();
        printf("%d\n", mem[ansi]+a[ansi]);
    }
}
void set() {
    int i; qind=ind=0;
    for(i=1;i<=n;i++) {
        mem[i]=0;
    }   
}