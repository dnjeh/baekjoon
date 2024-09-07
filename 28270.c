#include <stdio.h>
int s[1000100], sind=1, a[1000100];
int main() {
    int c, t;
    scanf("%d", &c);
    for(int i=0;i<c;i++) {
        scanf("%d", &t);
        if(!i&&t!=1) {
            printf("-1");
            return 0;
        }
        if(sind+1==t) {
            sind++;
            s[sind]=0;
        }
        else if(sind>t) sind=t;
        else if(sind!=t) {
            printf("-1");
            return 0;
        }
        a[i]=++s[sind];
    }
    for(int i=0;i<c;i++) {
        printf("%d ", a[i]);
    }
}