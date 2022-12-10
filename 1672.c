#include <stdio.h>
int main() {
    int i, n;
    scanf("%d", &n);
    char a[n+1];
    for(scanf("%s", a), i=n-1;i;i--) {
        switch((a[i]-a[i-1])>0?(a[i]-a[i-1]):(a[i]-a[i-1])*-1) {
            case 2: case 13:
                a[i-1]='A';
                break;
            case 4:
                a[i-1]='T';
                break;
            case 6:
                a[i-1]='C';
                break;
            case 17: case 19: 
                a[i-1]='G';
                break;
            default:
                break;
            }
        a[i]='\0';
    }
    printf("%c", a[0]);
}