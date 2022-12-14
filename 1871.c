#include <stdio.h>
int main() {
    int a, b, i, n;
    char t[9]={'\0',};
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        a=(t[4]-48)*1000+(t[5]-48)*100+(t[6]-48)*10+(t[7]-48);
        b=(t[0]-65)*26*26+(t[1]-65)*26+(t[2]-65);
        if(((a-b)<0?((a-b)*-1):(a-b))<=100) {
            printf("nice\n");
        }
        else {
            printf("not nice\n");
        }
    }
}