#include <stdio.h>
#include <string.h>
int n, m;
char a[100][11], b[100][11];
char last(char *t) {
    int i;
    char ret;
    for(i=0;t[i];i++) ret=t[i];
    return ret;
}
int chk(char *t) {
    int i, ret=1;
    for(i=0;i<n;i++) {
        if(!strcmp(t, a[i])) ret=0;
    }
    return ret;
}
int main() {
    int i, now;
    char fir, las;
    scanf("%d\n", &n);
    for(i=0;i<n;i++) {
        scanf("%s", a[i]);
        if(a[i][0]=='?') {
            now=i;
        }
    }
    fir=now?last(a[now-1]):0;
    las=now+1!=n?(a[now+1][0]):0;
    scanf("%d\n", &m);
    for(i=0;i<m;i++) {
        scanf("%s", b[i]);
        if(chk(b[i])&&(!fir||b[i][0]==fir)&&(!las||last(b[i])==las)) {
            printf("%s", b[i]);
        }
    }
}