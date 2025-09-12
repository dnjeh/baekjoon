#include <stdio.h>
int main() {
    int n, a[3], b;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        b=0;
        for(int j=0;j<3;j++) {
            scanf("%d", &a[j]);
            if(a[j]>=10) b++;
            printf("%d%c", a[j], j+1==3?'\n':' ');
        }
        if(!b) printf("zilch\n");
        else if(b==1) printf("double\n");
        else if(b==2) printf("double-double\n");
        else printf("triple-double\n");
        if(i+1<n) printf("\n");
    }
}