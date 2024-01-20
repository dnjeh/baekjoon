#include <stdio.h>
#include <string.h>
int main() {
    int totsum=0, i, cre=0, gra, trasum=0, t, tcre;
    char tra[55], tgra[3];
    for(i=0;i<20;i++) {
        scanf("%s %d.%d %s", tra, &tcre, &t, tgra);
        if(!strcmp(tgra, "P")) continue;
        cre=tcre*10; trasum+=cre;
        if(!strcmp(tgra, "A+")) gra=45;
        else if(!strcmp(tgra, "A0")) gra=40;
        else if(!strcmp(tgra, "B+")) gra=35;
        else if(!strcmp(tgra, "B0")) gra=30;
        else if(!strcmp(tgra, "C+")) gra=25;
        else if(!strcmp(tgra, "C0")) gra=20;
        else if(!strcmp(tgra, "D+")) gra=15;
        else if(!strcmp(tgra, "D0")) gra=10;
        else gra=0;
        totsum+=gra*cre;
    }
    printf("%.6lf", totsum/(double)trasum/(double)10);
}