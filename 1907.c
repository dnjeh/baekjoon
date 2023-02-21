#include <stdio.h>
int main() {
    int a[3][3]={{0, }, }, cnt=0, i, j, k; //C, O, H
    char t[2]={'\0', };
    for(;scanf("%c",&t[1])!=EOF;) {
        if(t[1]=='+'||t[1]=='=') {
            if(t[0]) {
                if(t[0]=='C') a[cnt][0]++;
                else if(t[0]=='O') a[cnt][1]++;
                else if(t[0]=='H') a[cnt][2]++;
            }
            cnt++;
            t[0]=t[1]='\0';
        }
        else if(t[1]>='0'&&t[1]<='9') {
            if(t[0]=='C') a[cnt][0]+=t[1]-48;
            else if(t[0]=='O') a[cnt][1]+=t[1]-48;
            else if(t[0]=='H') a[cnt][2]+=t[1]-48;
            t[0]=t[1]='\0';
        }
        else if(t[0]) {
            if(t[0]=='C') a[cnt][0]++;
            else if(t[0]=='O') a[cnt][1]++;
            else if(t[0]=='H') a[cnt][2]++;
            t[0]='\0';
        }
        t[0]=t[1];
        t[1]='\0';
    }
    if(t[0]&&!t[1]) {
        if(t[0]=='C') a[cnt][0]++;
        else if(t[0]=='O') a[cnt][1]++;
        else if(t[0]=='H') a[cnt][2]++;
        t[0]=t[1]='\0';
    }
    for(i=1;i<=10;i++) {
        for(j=1;j<=10;j++) {
            for(k=1;k<=10;k++) {
                if(((a[0][0]*i+a[1][0]*j)==(a[2][0]*k))&&((a[0][1]*i+a[1][1]*j)==(a[2][1]*k))&&((a[0][2]*i+a[1][2]*j)==(a[2][2]*k))) {
                    printf("%d %d %d", i, j, k);
                    return 0;
                }
            }
        }
    }
}