#include <stdio.h>
long long int n, m;
long long int a[300100], cnt=0;
int b[300100];
void iheaput(long long int n) {
    long long int _i, _t, f;
    a[++cnt]=n;
    f=cnt;
    for(_i=cnt/2;_i>=1;_i/=2) {
        if(a[f]<a[_i]) {
            _t=a[_i];
            a[_i]=a[f];
            a[f]=_t;
        }
        else break;
        f=_i;        
    }
}
long long int oheaput() {
    long long int _fin, _i, _t;
    if(!cnt) _fin=-1;
    else {
        _fin=a[1];
        a[1]=a[cnt];
        a[cnt--]=0;
        for(_i=2;_i<=cnt;_i*=2) {
            if(a[_i/2]>a[_i]||(a[_i/2]>a[_i+1]&&(_i+1<=cnt))) {
                _t=a[_i/2];
                a[_i/2]=a[_i]<a[_i+1]||_i+1>cnt?a[_i]:a[_i+1];
                if(a[_i]<a[_i+1]||_i+1>cnt) a[_i]=_t;
                else a[++_i]=_t;
            }
            else break;
        }
    }
    return _fin;
}
long long int ra[300100], rcnt=0;
void riheaput(long long int n) {
    long long int _i, _t, f;
    ra[++rcnt]=n;
    f=rcnt;
    for(_i=rcnt/2;_i>=1;_i/=2) {
        if(ra[f]>ra[_i]) {
            _t=ra[_i];
            ra[_i]=ra[f];
            ra[f]=_t;
        }
        else break;
        f=_i;        
    }
}
long long int roheaput() {
    long long int _fin, _i, _t;
    if(!rcnt) _fin=0;
    else {
        _fin=ra[1];
        ra[1]=ra[rcnt];
        ra[rcnt--]=0;
        for(_i=2;_i<=rcnt;_i*=2) {
            if(ra[_i/2]<ra[_i]||(ra[_i/2]<ra[_i+1]&&(_i+1<=rcnt))) {
                _t=ra[_i/2];
                ra[_i/2]=ra[_i]>ra[_i+1]||_i+1>rcnt?ra[_i]:ra[_i+1];
                if(ra[_i]>ra[_i+1]||_i+1>rcnt) ra[_i]=_t;
                else ra[++_i]=_t;
            }
            else break;
        }
    }
    return _fin;
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
    long long int sum=0;
    long long int i, t, tt;
    scanf("%lld %lld", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%lld %lld", &t, &tt);
        iheaput(t*10000000+tt);
    }
    for(i=0;i<m;i++) {
        scanf("%d", &b[i]);
    }
    mergeSort(b, 0, m-1);
    for(i=0;i<m;i++) {
        for(t=oheaput();t!=-1&&(t/10000000)<=(long long int)b[i];t=oheaput()) {
            riheaput(t%10000000);
        } 
        if(t!=-1) {
            iheaput(t);
        }
        sum+=roheaput();
    }
    printf("%lld", sum);
}