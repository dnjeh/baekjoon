#include <stdio.h>
#include <string.h>

char pre_ord[30], in_ord[30], pind;

void fun(int a, int b) {
    if(a>b) return;
    char t=pre_ord[pind++];
    for(int i=0;in_ord[i];i++) {
        if(t==in_ord[i]) {
            fun(a, i-1);
            fun(i+1, b);
            printf("%c", t);
        }
    }
}

int main() {
    for(;scanf(" %s", pre_ord)!=EOF;) {
        scanf(" %s", in_ord);
        pind=0;
        fun(0, strlen(in_ord)-1);
        printf("\n");
        for(int i=0;i<30;i++) {
            pre_ord[i]=in_ord[i]=0;
        }
    }
    return 0;
}
