#include <stdio.h>
int main()
    {
    int n, a, b, c, d, cnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a>=1000||b>=1600||c>=1500||(d!=-1&&d<=30)) cnt++;
        }
    printf("%d", cnt);
    }