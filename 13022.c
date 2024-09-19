#include <stdio.h>
int chk(int t, int tt) {
    if((t=='w'&&tt=='o')||(t=='o'&&tt=='l')||(t=='l'&&tt=='f')||(t=='f'&&tt=='w')) return 0;
    else return 1;
}
int main() {
    char a[55], pre=0, b[2]={0, }, bind=0;
    scanf("%s", a);
    for(int i=0;a[i];i++) {
        if(pre&&pre!=a[i]&&(chk(pre, a[i])||(pre!='w'&&b[0]!=b[1]))) {
            printf("0");
            return 0;
        }
        else if(pre&&pre!=a[i]) {
            bind++;
            b[bind%2]=0;
        }
        b[bind%2]++;
        pre=a[i];
    }
    if((bind+1)%4||pre!='w'&&b[0]!=b[1]) {
        printf("0");
        return 0;
    }
    printf("1");
}