#include <stdio.h>
char a[1010][1010];
int main() {
    int T, n, t;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        int max=0;
        scanf("%d\n", &n);
        for(int j=0;j<n;j++) {
            scanf("%s", &a[j]);
        }
        for(int stay=0;stay<n;stay++) {
            for(int stax=0;stax<n;stax++) {
                for(int h=2;h+stay<=n&&h+stax<=n;h++) {
                    int f=0;
                    for(int y=stay;y<stay+h&&!f;y++) {
                        for(int x=stax;x<stax+h&&!f;x++) {
                            if(a[y][x]=='#') f=1;
                        }
                    }
                    if(!f&&
                    max<(t=h*h)) max=t; 
                }
            }
        }
        printf("%d\n", max);
    }
}   