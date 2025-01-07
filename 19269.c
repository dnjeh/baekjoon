#include <stdio.h>
void printff(int t) {
    printf("%d\n", t);
    fflush(stdout);
}
//f==1일때 M
int chk(char t, int a) {
    if(t=='V') return 0;
    else if((t=='F'&&!(a%2))||(t=='M'&&(a%2))) return 1;
    else return -1;
}
int main() {
    char a[10];
    int n, sta, end, f, t;
    scanf("%d", &n);
    sta=0; end=n;
    printff(0);
    scanf("%s", a);
    if(a[0]=='V') return 0;
    f=a[0]=='M';
    for(int mid;;) {
        mid=(sta+end)/2;
        printff(mid);
        scanf("%s", a);
        if(!(t=chk(a[0], f+mid))) return 0;
        else if(t<0) end=mid-1;
        else sta=mid+1;
    }
}