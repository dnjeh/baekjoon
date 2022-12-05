#include <stdio.h>
#include <string.h>
int main() {
    int i, j, t1;
    char t[81]={'\0',}, a[2][81]={'\0',}, fin[82]={'\0',};
    for(i=0;i<2;i++) {
        scanf("%s", t);
        for(j=strlen(t)-1;j>=0;j--) {
            a[i][strlen(t)-1-j]=t[j];
        }
    }
    for(i=0;a[0][i]!='\0'||a[1][i]!='\0';i++) {
        if(a[0][i]=='1'&&a[1][i]=='1') {
            fin[i]='2';
        }
        else if(a[0][i]=='1'||a[1][i]=='1') {
            fin[i]='1';
        }
        else {
            fin[i]='0';
        }
    }
    for(i=0;fin[i]!='\0';i++) {
        if(fin[i]=='3') {
            (fin[i+1])?(fin[i+1]++):(fin[i+1]='1');
            fin[i]='1';
        }
        else if(fin[i]=='2') {
            (fin[i+1])?(fin[i+1]++):(fin[i+1]='1');
            fin[i]='0';
        }
    }
    for(strlen(fin)-1;i>=0;i--) {
        printf("%c", fin[i]);
    }
}