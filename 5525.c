#include <stdio.h>
int n, m, b[1000000];
char a[1000001];
int main() {
    int i=0, f=0, cnt=0;
    scanf("%d %d %s", &n, &m, a);
    for(i=0;a[i];i++) {
        if(!f&&a[i]=='I') f=1;
        if((f&&f%2&&a[i]=='I')||(f&&!(f%2)&&a[i]=='O')) b[i]=f++;
        else if(a[i]=='I') {
            b[i]=1;
            f=2;
        }
        else f=0; 
        if(b[i]>=(n*2+1)&&b[i]%2) cnt++;
    }
    //for(i=0;a[i];i++) printf("%d", b[i]);
    printf("%d", cnt);
}