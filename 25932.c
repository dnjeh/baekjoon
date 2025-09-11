#include <stdio.h>
int main() {
    int n, a[10], b;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        b=0;
        for(int j=0;j<10;j++) {
            scanf("%d", &a[j]);
            if(a[j]==17) b|=1;
            if(a[j]==18) b|=2;
            printf("%d%c", a[j], j+1==10?'\n':' ');
        }
        if(!b) printf("none\n");
        else if(b==1) printf("zack\n");
        else if(b==2) printf("mack\n");
        else printf("both\n");
        if(i+1<n) printf("\n");
    }
}