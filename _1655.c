#include <stdio.h>
int a[300100], cnt=0;
void iheaput(int n) {
    int _i, _t, f;
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
int oheaput() {
    int _fin, _i, _t;
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
int ra[300100], rcnt=0;
void riheaput(int n) {
    int _i, _t, f;
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
int roheaput() {
    int _fin, _i, _t;
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
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {

        
    }
}