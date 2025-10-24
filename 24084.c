#include <stdio.h>
int main() {
    char t[110];
    int n;
    scanf("%d\n%s", &n, t);
    for(int i=0;i<n-1;i++) {
        if(t[i+1]=='J') printf("%c\n", t[i]);
    }
}