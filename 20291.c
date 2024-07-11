#include <stdio.h>
int main() {
    int now=0, a[4] = {0, 0, 0, 0}, cnt=0;
    char t[1010];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='R') {
            now=(now+1)%4;
            a[now]=1;
        }
        else now=(now+4-1)%4;
        if(!now&&a[0]&&a[1]&&a[2]&&a[3]) {
            cnt++;
        }
        if(!now) {
            for(int j=0;j<4;j++) {
                a[j]=0;
            }
        }
    }
    printf("%d", cnt);
}