#include <stdio.h>
#include <string.h>

void myswap(char *a, char *b) {
    char t;
    t=*a;
    *a=*b;
    *b=t;
}

int fun2(char *a, char *b) {
    int f=0;
    for(int i=0;i<2;i++) {
        //printf("%c %c\n", *a, *b);
        if(*a=='A'&&*b=='A' || *a=='E'&&*b=='3'
        || *a=='H'&&*b=='H' || *a=='I'&&*b=='I'
        || *a=='M'&&*b=='M' || *a=='O'&&*b=='O'
        || *a=='S'&&*b=='2' || *a=='T'&&*b=='T'
        || *a=='U'&&*b=='U' || *a=='V'&&*b=='V'
        || *a=='W'&&*b=='W' || *a=='X'&&*b=='X'
        || *a=='Y'&&*b=='Y' || *a=='Z'&&*b=='5'
        || *a=='b'&&*b=='d' || *a=='i'&&*b=='i'
        || *a=='l'&&*b=='l' || *a=='m'&&*b=='m'
        || *a=='n'&&*b=='n' || *a=='o'&&*b=='o'
        || *a=='p'&&*b=='q' || *a=='r'&&*b=='7'
        || *a=='u'&&*b=='u' || *a=='v'&&*b=='v'
        || *a=='w'&&*b=='w' || *a=='x'&&*b=='x'
        || *a=='0'&&*b=='0' || *a=='1'&&*b=='1'
        || *a=='8'&&*b=='8'
        ) { 
            f=i+1;
            break;
        }
        myswap(a, b);
    }
    if(f==2) {
        myswap(a, b);
    }
    return !f;
}

int isal(char* t) {
    return (*t>='a'&&*t<='z'||*t>='A'&&*t<='Z')?1:0;
}

void trns(char* t) {
    if(*t>='a'&&*t<='z') *t+='A'-'a';
    else *t+='a'-'A';
}

int fun(char *a, char *b) {
    for(int i=0;i<4;i++) {
        //printf("%c %c\n", *a, *b);
        if(!fun2(a, b)) return 0;
        if(!i&&isal(a)) {
            trns(a);
        }
        if(i==1&&isal(b)) {
            trns(b);
        }
        if(i==2&&isal(a)) {
            trns(a);
        }
    }
    return 1;    
}

int main() {
    int n;
    char t[5010];
    scanf("%s", t);
    n=strlen(t)-1;
    for(int i=0;i<=n-i;i++) {
        if(fun(&t[i], &t[n-i])) {
            printf("-1");
            return 0;
        }
    }
    printf("%s", t);
    return 0;
}
