#include <stdio.h>
int main() {
    int sum=0, f=0;
    char t[1010];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(!f&&t[i]=='K'||f==1&&t[i]=='O'||f==2&&t[i]=='R'||f==3&&t[i]=='E'||f==4&&t[i]=='A') {
            f=(f+1)%5;
            sum++;
        }
    }
    printf("%d", sum);
}