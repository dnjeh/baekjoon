#include <stdio.h>
int main() {
    int a[2][5] = {{0, }, }, n;
    char t[12];
    for(int i=0;i<2;i++) {
        scanf("%s", t);
        for(int j=0;j<10;j++) {
            if(t[j]<97) a[0][t[j]-65]=1;
            else if(!i&&!a[1][t[j]-97]) a[1][t[j]-97]=-1;
            else if(i&&a[1][t[j]-97]==-1) a[1][t[j]-97]=1;
        }
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s", t);
        int f=0;
        for(int j=0;!f&&j<5;j++) {
            if((t[j]<97&&!a[0][t[j]-65])||(t[j]>=97&&1!=a[1][t[j]-97])) {
                f=1;
            }
        }
        printf("%s\n", f?"Not their baby!":"Possible baby.");
    }
}