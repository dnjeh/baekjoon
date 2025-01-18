#include <stdio.h>

int main() {
    int a=0, b=0, c=0;
    char fa, fb;
    char t[1010];
    scanf("%s", t);
    fa=fb=t[0];
    for(int i=1;t[i];i++) {
        if(t[i]!=t[i-1]) {
            c++;
        }
        if(fa!=t[i]) {
            fa=t[i];
            a++;
        }
        if(fb!=t[i]) {
            fb=t[i];
            b++;
        }
        if(fa!='U') {
            fa='U';
            a++;
        }
        if(fb!='D') {
            fb='D';
            b++;
        }
    }
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}
