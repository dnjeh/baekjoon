#include <stdio.h>
int main() {
    int i, j, n, sum=0, t=0;
    char a[81]={'\0'};
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        sum=t=0;
        scanf("%s", a);
        for(j=0;a[j]!='\0';j++) {
            if(a[j]=='O') {
                t++;
                sum+=t;
            }
            else {
                t=0;
            }
        }
        printf("%d\n", sum);
    }
}