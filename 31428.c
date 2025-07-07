#include <stdio.h>
int main() {
    int n, a[4]={0, };
    char t;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%c ", &t);
        if(t=='C') a[0]++;
        else if(t=='S') a[1]++;
        else if(t=='I') a[2]++;
        else a[3]++;
    }
    scanf("%c", &t);
    printf("%d", t=='C'?a[0]:(t=='S'?a[1]:(t=='I'?a[2]:a[3])));
}