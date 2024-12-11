#include <stdio.h>
int a[200000];
int main() {
    int n, p, max=0;
    scanf("%d %d", &n, &p);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(int sta=0, end=0;sta<=end&&end<n;) {
        //printf("%d %d %d\n", sta, end, p);
        if(end+1<n&&a[end+1]-a[end]-1<=p) {
            p-=a[end+1]-a[end]-1;
            end++;
        }
        else if(sta<end) {
            p+=a[sta+1]-a[sta]-1;
            sta++;
        }
        else {
            sta++; end++;
        }
        if(a[end]-a[sta]+p+1>max) max=a[end]-a[sta]+1+p;
    }
    printf("%d", max);
}
