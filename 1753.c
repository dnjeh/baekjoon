#include <stdio.h>
#define END 9223372036854775807
long long int min[1000001], minc=0;
long long int p[300010];
long long int d[20001], vis[20001];
long long int n, sta, end, now, ind;
void set();
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
    for(;j<n2;j++,k++) arr[k] = R[j];
}
void mergeSort(long long int arr[], int left, int right) {
    if(left<right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
void iminput(long long int n) {
    long long int _i, _t, f;
    min[++minc]=n;
    f=minc;
    for(_i=minc/2;_i>=1;_i/=2) {
        if(min[f]<min[_i]) {
            _t=min[_i];
            min[_i]=min[f];
            min[f]=_t;
        }
        else break;
        f=_i;        
    }
}
long long int ominput() {
    long long int _fin, _i, _t;
    do {
        if(!minc) _fin=END;
        else {
            _fin=min[1];
            min[1]=min[minc];
            min[minc--]=0;
            for(_i=2;_i<=minc;_i*=2) {
                if(min[_i/2]>min[_i]||(min[_i/2]>min[_i+1]&&(_i+1<=minc))) {
                    _t=min[_i/2];
                    min[_i/2]=min[_i]<min[_i+1]||_i+1>minc?min[_i]:min[_i+1];
                    if(min[_i]<min[_i+1]||_i+1>minc) min[_i]=_t;
                    else min[++_i]=_t;
                }
                else break;
            }
        }
    } while(_fin!=END&&vis[_fin%100000]==1);
    if(_fin!=END) vis[_fin%100000]=1;
    return _fin;
}
long long int ubs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(p[mid]<=end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
long long int lbs(long long int end) {
    long long int up, dwn, mid;
    up=ind; dwn=0;
    for(mid=(dwn+up)/2;dwn<up;mid=(dwn+up)/2) {
        if(p[mid]<end) dwn=mid+1;
        else up=mid;
    }
    return up;
}
int main() {
    long long int m, i, j, t[3], min[2], f=1;
    long long int tsta, tend;
    set();
    scanf("%lld %lld %lld", &n, &m, &sta);
    for(i=0;i<m;i++) {
        for(j=0;j<3;j++) scanf("%lld", &t[j]);
        p[ind++]=t[0]*10000000+t[1]*100+t[2];
    }
    mergeSort(p, 0, ind-1);
    d[sta]=0;
    for(now=sta;f;) {
        long long int tsta=lbs(now*10000000), tend=lbs((now+1)*10000000);
        for(i=tsta;i<tend;i++) {
            if((d[now]+p[i]%100<d[p[i]/100%100000])||d[p[i]/100%100000]==-1) {
                d[p[i]/100%100000]=d[now]+p[i]%100;
                iminput(d[p[i]/100%100000]*100000+p[i]/100%100000);
            }
        }
        vis[now]=1; f=0;
        now=ominput();
        if(now!=END) {
            f=1;
            now%=100000;
        }
    }
    for(i=1;i<=n;i++) {
        if(d[i]!=-1) printf("%lld\n", d[i]);
        else printf("INF\n");
    }
}

void set() {
    long long int i, j;
    for(i=0;i<=20000;i++) d[i]=-1; 
}