#include <stdio.h>
int n, a[20200], b[10000], mem[2][10100], ind;
int max(int t, int tt) {
    return t>tt?t:tt;
}
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
    for(;j<n2;j++,k++) arr[k]=R[j];
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
        if(a[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int lbs(int end) {
    int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(a[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int dp(int t, int tt, int from) {
    int ret=0;
    if(mem[tt][t]!=-1) ret=mem[tt][t];
    else {
        //printf("%d %d\n", t, tt);
        int sta=lbs(t*10000), end=lbs((t+1)*10000);
        if(tt) ret+=b[t];
        for(int i=sta;i<end;i++) {
            if(a[i]%10000==from) continue;
            ret+=max(dp(a[i]%10000, 0, t), ((!tt)?dp(a[i]%10000, 1, t):0));
        }
        mem[tt][t]=ret;
    }
    //printf("mem[%d][%d] = %d\n", tt, t, ret);
    return ret;
}
int aput(int t, int tt) {
    a[ind++]=t*10000+tt;   
}
int main() {
    int t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            mem[j][i]=-1;
        }
    }
    for(int i=0;i<n-1;i++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        aput(t, tt);
        aput(tt, t);
    }
    mergeSort(a, 0, ind-1);
    printf("%d", max(dp(0, 0, 0), dp(0, 1, 0)));
}
