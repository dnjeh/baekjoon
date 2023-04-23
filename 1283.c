#include <stdio.h>
int a[26], tt[5], cntt;
char t[60];
int asci(char _t) {
    if(_t>96) return _t-97;
    else return _t-65;
}
int find() {
    int _i;
    for(_i=0;_i<cntt;_i++) {
        if(!a[asci(t[tt[_i]])]) {
            a[asci(t[tt[_i]])]=1;
            return tt[_i];
        }
    }
    for(_i=0;t[_i]!='\n';_i++) {
        if(t[_i]!=' '&&!a[asci(t[_i])]) {
            a[asci(t[_i])]=1;
            return _i;
        }
    }
    return -1;
}
int main() {
    int n, i, j, ttt;
    scanf("%d", &n);
    getchar();
    for(i=0;i<n;i++) {
        ttt=-1; cntt=0;
        for(j=0;j<5;j++) tt[j]=0;
        fgets(t, 100, stdin);
        for(j=0;t[j]!='\n';j++) {
            if(!j||t[j-1]==' ') tt[cntt++]=j;
        }
        ttt=find();
        for(j=0;t[j]!='\n';j++) {
            if(j==ttt) printf("[%c]", t[j]);
            else printf("%c", t[j]);
        }
        printf("\n");
    }
}