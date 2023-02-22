#include <stdio.h>
int a[100001];
int main() {
    int n, m, t, i, sum=0;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for(i=1;m-i>=i;i++) {   
        if(!(m-i>100000)&&(i!=(m-i)&&a[i]&&a[m-i])||(i==(m-1)&&a[i]>=2)) {
            a[i]--;
            a[m-i]--;
            sum++;
            i--;
        }
    }
    printf("%d", sum);
}