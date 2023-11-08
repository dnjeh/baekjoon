#include <stdio.h>
int main() {
    int i, sum=0, f;
    char a[101], t, tt;
    scanf("%s", a);
    for(i=0;a[i];i++) {
        f=0;
        sum++;
        if(i>=2) {
            if(t=='d'&&tt=='z'&&a[i]=='=') {
                sum-=2;
                f=1;
            }
        } 
        if(i) {
            if((tt=='c'&&(a[i]=='='||a[i]=='-')) ||
               (tt=='d'&&a[i]=='-') ||
               (tt=='l'&&a[i]=='j') ||
               (tt=='n'&&a[i]=='j') ||
               (tt=='s'&&a[i]=='=') ||
               (!f&&tt=='z'&&a[i]=='=')
            ) sum--;
        } 
        t=tt;
        tt=a[i];
    }
    printf("%d", sum);
}