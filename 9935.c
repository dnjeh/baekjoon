#include <stdio.h>
#include <string.h>
char a[1000011], b[40];
int fcnt, bcnt, cnt=0;
void printa(int t) {
    for(int i=0;i<fcnt;i++) {
        printf("%c", t==i?'^':!a[i]?' ':a[i]);
    }
    printf("\n");
}
int strdel(int sta, int siz) {
    int i, j;
    for(i=sta, j=0;j<siz&&i>=0;i--) {
        if(a[i]) {
            a[i]=0;
            j++;
        }
    }
    return i;
}
int fly(int sta, int siz) {
    int i, j;
    for(i=sta, j=0;i>=0&&j<siz;i--) {
        if(a[i]) {
            j++;
        }
    }
    return i+1;
}
int main() {
    int i, j;
    scanf("%s %s", a, b);
    fcnt=strlen(a); bcnt=strlen(b);
    for(i=j=0;i<=fcnt&&cnt<fcnt;i++) if(a[i]||i==fcnt) {
        //printa(i);
        if(!b[j]) {
            i=strdel(i-1, bcnt);
            i=fly(i, bcnt);
            cnt+=bcnt;
            if(i<=0) i=-1;
            j=0;
        }
        else if(a[i]==b[j]) j++;
        else { 
            j=0; 
            if(a[i]==b[j]) j++;
        }
    }
        for(i=0;i<fcnt;i++) {
            if(a[i]) printf("%c", a[i]);
        }
        printf("\n");
}