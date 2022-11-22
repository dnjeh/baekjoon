#include <stdio.h>
int main() {
    int t, i;
    for(scanf("%d", &t);;scanf("%d", &t)) {
        if(t/10000) {
            if(t/10000==t%10&&(t/1000)%10==(t/10)%10) printf("yes");
            else printf("no");
        }
        else if(t/1000) {
            if(t/1000==t%10&&(t/100)%10==(t/10)%10) printf("yes");
            else printf("no");
        }
        else if(t/100) {
            if(t/100==t%10) printf("yes");
            else printf("no");
        }
        else if(t/10) {
            if(t/10==t%10) printf("yes");
            else printf("no");
        }
        else if(t) {
            printf("yes");
        }
        else {
            return 0;
        }
        printf("\n");
    }
}