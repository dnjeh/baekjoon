#include <stdio.h>
#define NIE 100000000
long long int a[100000];
int b[100100], cnt;
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

void iheaput(int n) {
    int _i, _t, f;
    b[++cnt]=n;
    f=cnt;
    for(_i=cnt/2;_i>=1;_i/=2) {
        if(b[f]<b[_i]) {
            _t=b[_i];
            b[_i]=b[f];
            b[f]=_t;
        }
        else break;
        f=_i;        
    }
}
int oheaput() {
    int _fin, _i, _t;
    if(!cnt) _fin=0;
    else {
        _fin=b[1];
        b[1]=b[cnt];
        b[cnt--]=0;
        for(_i=2;_i<=cnt;_i*=2) {
            if(b[_i/2]>b[_i]||(b[_i/2]>b[_i+1]&&(_i+1<=cnt))) {
                _t=b[_i/2];
                b[_i/2]=b[_i]<b[_i+1]||_i+1>cnt?b[_i]:b[_i+1];
                if(b[_i]<b[_i+1]||_i+1>cnt) b[_i]=_t;
                else b[++_i]=_t;
            }
            else break;
        }
    }
    return _fin;
}

void aput(int now, long long int t, long long int tt) {
    long long int ttt;
    if(t<tt) {
        ttt=t;
        t=tt;
        tt=ttt;
    }
    if(t>=0&&tt<0) {
        a[now]=t*NIE*10+NIE+tt*-1;
    }
    else {
        a[now]=t*NIE*10+tt;
    }
}

long long int apop(int now, int f) {
    if(f) {
        if(a[now]/NIE%10) {
            return (a[now]*-1)%NIE;
        }
        else return a[now]%NIE;
    }
    else {
        return a[now]/(NIE*10);
    }
}

int main() {
    long long int n, t, tt, ttt, d, r, l;
    int tcnt=0, max=0;
    scanf("%lld", &n);
    for(int i=0;i<n;i++) {
        scanf("%lld %lld", &tt, &t);
        aput(i, tt, t);
    } scanf("%lld", &d);
    mergeSort(a, 0, n-1);
    for(int i=0;i<n;i++) {
        r=apop(i, 0); l=apop(i, 1);
        //printf("%lld %lld %lld\n", a[i], r, l);
        for(;cnt;) {
            t=oheaput(); 
            //printf("%lld\n", t);
            if(r-t>d) {
                tcnt--;
            }
            else {
                iheaput(t);
                break;
            }
        }
        if(r-l<=d) {
            iheaput(l);
            tcnt++;
            if(!i||max<tcnt) max=tcnt;
        }
    }
    printf("%d", max);
}