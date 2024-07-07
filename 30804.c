#include <stdio.h>
int a[200000], b[10], n;
int main() {
    int sta=0, end=0, max=0, t, tt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    b[a[0]]++;
    for(;sta<=end;) {
        t=tt=0;
        if(end-sta+1>max) max=end-sta+1;
        for(int i=1;i<=9;i++) {
            if(b[i]) {
                if(!t) t=i;
                else tt=i;
            }
        }
        if(end+1<n&&(!tt||t==a[end+1]||tt==a[end+1])) {
            b[a[end+1]]++;
            end++;
        }
        else {
            b[a[sta]]--;
            sta++;
        }
    }   
    printf("%d", max);
}