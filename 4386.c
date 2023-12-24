#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define FUR 1000
long long int vis[101], vcnt, pnt[2][101], a[50050], aind;
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
    long long int i, j, t, tt, ttt, tttt, cnt;
    double ans=0;
    scanf("%d", &v);
    set();
    for(i=1;i<=v;i++) {
        scanf("%lld.%lld %lld.%lld", &t, &tt, &ttt, &tttt);
        pnt[0][i]=t*100+tt;
        pnt[1][i]=ttt*100+tttt;
    }
    for(i=1;i<=v;i++) {
        for(j=i+1;j<=v;j++) {
            a[aind++]=(llabs(pnt[0][i]-pnt[0][j])*llabs(pnt[0][i]-pnt[0][j])
            + llabs(pnt[1][i]-pnt[1][j])*llabs(pnt[1][i]-pnt[1][j]))*FUR*FUR
            + i*FUR + j;
        }
    }
    mergeSort(a, 0, aind-1);
    for(cnt=i=0;cnt<v&&i<aind;i++) {
        t=llabs(a[i]/FUR%FUR); tt=llabs(a[i]%FUR); ttt=a[i]/FUR/FUR;
        if(find(t)!=find(tt)) {
            cnt++;
            ans+=sqrt((double)ttt);
            t=find(t); tt=find(tt);
            if(t>tt) vis[t]=tt;
            else vis[tt]=t;
        }
    }
    printf("%.2lf", ans/100.0);
}
void set() {
    for(int i=1;i<=v;i++) {
        vis[i]=i;
    }
}