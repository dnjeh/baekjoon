#include <stdio.h>
int main() {
    int n, h, w;
    char a[100]={'\0', }, t[1010];
    scanf("%d %d %d", &n, &h, &w);
    for(int i=0;i<h;i++) {
        scanf("%s", t);
        for(int j=0;j<n*w;j++) {
            if(t[j]!='?') a[j/w]=t[j];
        }
    }
    for(int i=0;i<n;i++) {
        printf("%c", a[i]?a[i]:'?');
    }
}