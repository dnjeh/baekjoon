#include <stdio.h>
int main() {
    int i, n=0;
    char a[51]={'\0', };
    scanf("%s", a);
    for(i=0;a[i]!='\0';i++) {
        if(a[i]=='X') n++;
        else n=0;
        if(n==4) {
            a[i]=a[i-1]=a[i-2]=a[i-3]='A';
            n=0;
        }   
        else if(n==2&&(a[i+1]=='.'||a[i+1]=='\0')) {
            a[i]=a[i-1]='B';
            n=0;
        }
        else if(n&&(a[i+1]=='.'||a[i+1]=='\0')) {
            printf("-1");
            return 0;
        }
    }
    printf("%s", a);
}