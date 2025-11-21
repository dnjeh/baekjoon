#include <stdio.h>
int abs(int a) {
    return a<0?a*-1:a;
}
int main() {
    int n, a=0, b=0;
    char t[1010];
    scanf("%d %s", &n, t);
    for(int i=0;i<n;i++) {
        if(t[i]=='N') a++;
        else if(t[i]=='S') a--;
        else if(t[i]=='E') b++;
        else b--;
    }
    printf("%d", abs(a)+abs(b));
}