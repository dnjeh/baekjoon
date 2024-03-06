#include <stdio.h>

int main() {
    int min=-1, sum=0, t;
    for(int i=0;i<7;i++) {
        scanf("%d", &t);
        if(t%2) sum+=t;
        if((t%2)&&(min==-1||min>t)) min=t;
    }
    if(!sum) printf("-1");
    else printf("%d\n%d", sum, min);
}
