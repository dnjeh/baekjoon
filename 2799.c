#include <stdio.h>
int main() {
    int a[5]={0, };
    int n, m, i, j;
    char t;
    scanf("%d %d", &n, &m);
    getchar();
    for(i=0;i<=n*5;i++) {
        for(j=0;j<=((i==n*5)?(m*5):(m*5+1));j++) {
            scanf("%c", &t);
            if(j%5==1&&i%5&&t=='*') {
                if(i%5>=2) a[i%5-1]--;
                a[i%5]++;    
            } 
            else if(j%5==1&&i%5==1&&t=='.') a[0]++;
        }
    }
    for(i=0;i<5;i++) printf("%d ", a[i]);
}