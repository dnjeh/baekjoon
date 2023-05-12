#include <stdio.h>
#include <string.h>
int ara[13]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
char *lom[13]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
char ret[30];
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
void readcnt(char _t[20], int _it[5]) {
    int ret=0;
    for(int i=0;_t[i];i++) {
        ret=-1;
        switch(_t[i]) {
        case 'C': ret++; 
        case 'L': ret++;
        case 'X': ret++;
        case 'V': ret++;
        case 'I': ret++;
        }
        _it[ret]++;
    }
} 
int main() {
    int cnt[5]={0, }, pcnt[5], j;
    char t[20]={'\0', };
    scanf("%s", t);
    readcnt(t, cnt);
    for(int i=1;i<=99;i++) {
        tolom(i);
        for(j=0;j<5;j++) pcnt[j]=0;
        readcnt(ret, pcnt);
        for(j=0;j<5;j++) if(cnt[j]!=pcnt[j]) break;
        if(j>4) {
            printf("%s", ret);
            return 0;
        }
    }
}