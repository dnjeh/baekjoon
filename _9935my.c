#include <stdio.h>
#include <string.h>
int sta[1000001], sind, bind;
char a[1000001], b[37];
int main() {
    int i, j, f=0;
    scanf("%s\n%s", a, b);
    bind=strlen(b);
    for(i=0;a[i];i++) {
        if(a[i]==b[0]) {
            sta[sind++]=0;
        }
        else if(sind&&a[i]==b[sta[sind-1]+1]) {
            sta[sind++]=sta[sind-1]+1;
            if(sta[sind-1]+1==bind) {
                sind-=bind;
            }
        }
        else {
            for(j=0;j<sind;j++) printf("%c", b[sta[j]]);
            sind=0;
            printf("%c", a[i]);
            f=1;
        }
    }
    if(!f&&!sind) printf("FRULA");
    else for(j=0;j<sind;j++) printf("%c", b[sta[j]]);
}