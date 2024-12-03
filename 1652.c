#include <stdio.h>

int main() {
    int a[100][100]={{0, }, }, n, ysum=0, xsum=0, tysum=0, txsum=0;
    char t[110];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<n;j++) {
            if(t[j]=='X') a[i][j]=1;
        }
    }
    for(int i=0;i<n;i++) {
        txsum=tysum=0;
        for(int j=0;j<n;j++) {
            if(a[i][j]) {
                if(txsum>=2) xsum++;
                txsum=0;
            }
            else txsum++;
            if(a[j][i]) {
                if(tysum>=2) ysum++;
                tysum=0;
            }
            else tysum++;
        }
        if(txsum>=2) xsum++;
        if(tysum>=2) ysum++;
    }
    printf("%d %d", xsum, ysum);
}
