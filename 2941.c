#include <stdio.h>
int main() {
    int i, sum=0;
    char a[101], t, tt;
    scanf("%s", a);
    for(i=0;a[i];i++) {
        sum++;
        if(i) {
            if((tt=='c'&&(a[i]=='='||a[i]=='-')) ||
               (tt=='d'&&a[i]=='-') ||
               (tt=='l'&&a[i]=='j') ||
               (tt=='n'&&a[i]=='j') ||
               (a[i]=='='&&(tt=='s'||tt=='z'))
            ) sum--;
        } 
        if(i>=2) {
            if(t=='d'&&tt=='z'&&a[i]=='=') sum-=2;
        } 
        t=tt;
        tt=a[i];
    }
    printf("%d", sum);
}