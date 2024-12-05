#include <stdio.h>
#include <string.h>
char a[500][10000], t[1000], tt[10100];
int aind;
void aput(char* t) {
    strcpy(a[aind++], t);
}
int main() {
    double b, c;
    for(scanf("%lf", &b);b!=(double)-1;scanf("%lf", &b)) {
        scanf("%s %lf ", t, &c);
        fgets(tt, 10000, stdin);
        tt[strlen(tt)-1]=0;
        if(b*100/c<1) aput(tt);
        else printf("%s %.1lf %s %.0lf%%\n", tt, b, t, b*100/c);
    }
    printf("Provides no significant amount of:\n");
    for(int i=0;i<aind;i++) {
        printf("%s\n", a[i]);
    }
}