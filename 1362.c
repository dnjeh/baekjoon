#include <stdio.h>
int main() {
    int a, b, c, d=0, i=1;
    char t;
    for(scanf("%d %d", &a, &b);a!=0&&b!=0;scanf("%d %d", &a, &b), i++, d=0) {
        if(b<=0) {
            d=-1;
        }
        else if((a/2.0)<((double)b)&&b<(a*2)) {
            d=1;
        }
        else {
            d=0;
        }
        while(getchar()!='\n') {}
        for(scanf("%c %d", &t, &c);t!='#'&&c!=0;scanf("%c %d", &t, &c)) {
            if(d!=-1) {
                if(t=='F') {
                    b+=c;
                }
                else {
                    b-=c;
                }
                if(b<=0) {
                    d=-1;
                }
                else if((a/2.0)<((double)b)&&b<(a*2)) {
                    d=1;
                }
                else {
                    d=0;
                }
            }
            while(getchar()!='\n') {}
        }
        printf("%d ", i);
        printf(d?(d>0?":-)":"RIP"):":-(");
        printf("\n");
    }
}