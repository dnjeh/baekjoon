#include <stdio.h>
long long int n, a[300000], ind, max;
void merge(long long int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle-left+1;
    int n2 = right-middle;
    long long int L[n1], R[n2];
    for(i=0;i<n1;i++) L[i]=arr[left+i];
    for(j=0;j<n2;j++) R[j]=arr[middle+1+j];
    for(i=0,j=0,k=left;i<n1&&j<n2;k++) {
        if(L[i]<=R[j]) arr[k]=L[i++];
        else arr[k]=R[j++];
    }
    for(;i<n1;i++,k++) arr[k]=L[i];
    for(;j<n2;j++,k++) arr[k]=R[j];
}
void mergeSort(long long int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
long long int ubs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
long long int lbs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
long long int dfs(long long int to, long long int from) {
    long long int i, sta=lbs(to*1000000000), end=lbs((to+1)*1000000000);
    long long int prem=0, tmax=0, t;
    for(i=sta;i<end;i++) {
        if(a[i]/10000%100000==from) continue;
        t=dfs(a[i]/10000%100000, to)+a[i]%10000+1;
        if(tmax<t) {
            prem=tmax;
            tmax=t;
        }
        else if(prem<t) {
            prem=t;
        }
    }
    if(tmax+prem>max) max=tmax+prem;
    return tmax;
}
int main() {
    int i, f;
    long long int t, tt, ttt;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%lld", &t);
        t--; 
        for(f=1;f;) {
            scanf("%lld", &tt);
            if(tt==-1) f=0;
            else {
                scanf("%lld", &ttt);
                tt--; ttt--;
                a[ind++]=t*100000*10000+tt*10000+ttt;
                if(ttt>max) max=ttt+1;
            }
        }
    }
    mergeSort(a, 0, ind-1);
    dfs(0, 0);
    printf("%lld", max);
}