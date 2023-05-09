#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ara[13]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
char *lom[13]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
char ret[30];
int toara(char str[30]) {
    int i, _ret=0, ind=0, di, f=0; 
    char t;
    for(i=0;i<13;) {
        if(i%2) di=2;
        else di=1;
        t=str[ind+di];
        str[ind+di]=0;
        if(!strcmp(lom[i], &str[ind])) {
            _ret+=ara[i];
            f=1;
        }
        else i++;
        str[ind+di]=t;
        if(f) {
            ind+=di;
            f=0;
        }
    }
    return _ret;
}
void tolom(int _t) {
    int ind=0, i;
    for(i=0;i<13&&_t;) {
        if(_t>=ara[i]) {
            strcpy(&ret[ind], lom[i]);
            _t-=ara[i];
            if(i%2) ind+=2;
            else ind++;
        }
        else i++;
    }
    ret[ind]=0;
}
int main() {
    int ans=0, i, T;
    char t[30], *tt;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", t);
        if(t[0]<='9'&&t[0]>='0') {
            tolom((int)strtol(t, &tt, 10));
            printf("%s\n", ret);
        }
        else printf("%d\n", toara(t));
    }
}