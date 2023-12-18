#include <stdio.h>
#include <stdlib.h>
#define SIX 100000
long long int vis[10001], vcnt, a[100100], aind;
int q[30000];
int v, e;
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
int find(int t) {
    int ind=1, i, ret;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=vis[q[i]]) {
            q[ind++]=vis[q[i]];
        }
    }
    ret=q[i-1];
    for(i=0;i<ind;i++) vis[q[i]]=ret;
    return ret;
}
void set();
int main() {
    long long int i, j, t, tt, ttt, cnt, ans=0;
    scanf("%d %d", &v, &e);
    set();
    for(i=0;i<e;i++) {
        scanf("%lld %lld %lld", &t, &tt, &ttt);
        if(ttt<0) {
            t*=-1;
            tt*=-1;
        } 
        a[aind++]=ttt*SIX*SIX+t*SIX+tt;
    }
    mergeSort(a, 0, aind-1);
    for(cnt=i=0;cnt<v&&i<aind;i++) {
        t=llabs(a[i]/SIX%SIX); tt=llabs(a[i]%SIX); ttt=a[i]/SIX/SIX;
        if(find(t)!=find(tt)) {
            cnt++;
            ans+=ttt;
            t=find(t); tt=find(tt);
            if(t>tt) vis[t]=tt;
            else vis[tt]=t;
        }
    }
    printf("%lld", ans);
}
void set() {
    for(int i=0;i<v;i++) {
        vis[i]=i;
    }
}