#include <stdio.h>
int seg[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};
int main() {
    int s, len, a[10]={0, }, i, j, k, l;
    long long int t;
    scanf("%d %lld", &s, &t);
    if(t) for(len=0;t;len++) {
        a[len]=(int)(t%10);
        t/=10;
    } 
    else len=1;
    len--;
    for(k=0;k<3;k++) {
        for(i=len;i>=0;i--) {
            printf(" ");
            for(j=0;j<s;j++) {
                if(seg[a[i]]&(!k?0x01:(k==1?0x40:0x08))) printf("-");
                else printf(" ");
            }
            printf("  ");
        }
        if(k>1) break;
        printf("\n");
        for(j=0;j<s;j++) {
            for(i=len;i>=0;i--) {
                if(seg[a[i]]&(!k?0x20:0x10)) printf("|");
                else printf(" ");
                for(l=0;l<s;l++)  printf(" ");
                if(seg[a[i]]&(!k?0x02:0x04)) printf("|");
                else printf(" ");
                printf(" ");
            }
            printf("\n");
        }
    }
}