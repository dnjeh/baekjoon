#include <stdio.h>
int a[100000], b[100001], a1, b1, c1;
char c[200001];
int main() {
    int i, n, cnt=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(;a1<n;) {
        if(a[a1]==b[b1]) {
            c[c1++]='-';
            b[b1--]=0;
            a1++;
        }   
        else if(a[a1]>b[b1]) {
            b[++b1]=++cnt;
            c[c1++]='+';
        }
        else {
            printf("NO");
            return 0;
        }
    }
    for(i=0;i<n*2;i++) printf("%c\n", c[i]);
}