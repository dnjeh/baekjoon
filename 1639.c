#include <stdio.h>
int main() {
    int a[50]={0, }, i, j, max=0, tsum, b=0;
    for(i=0;scanf("%1d", &a[i])!=EOF;i++);
    for(b=1;b<=25&&a[b*2-1];b++) {
        for(i=0;b*2-1+i<50&&a[b*2-1+i];i++) {
            tsum=0;
            for(j=i;j<i+b;j++) {
                tsum+=a[j];
            }
            for(;j<i+b*2;j++) {
                tsum-=a[j];
            }

            if(!tsum) {
                max=b;
                break;
            }
        }
    }
    printf("%d", max*2);
}