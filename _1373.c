#include <stdio.h>
#include <string.h>
char a[1000010];
int main() {
    int ia, i, t=0, f=0;
    scanf("%s", &a[2]);
    ia=strlen(&a[2])%3;
    if(!ia) ia=2;
    else ia-=1;
    for(i=ia;a[i+2];i+=3) {
        t=0;
        if(a[i]=='1') t+=4;
        if(a[i+1]=='1') t+=2;   
        if(a[i+2]=='1') t+=1;
        if(f||t) {
            printf("%d", t);
            f=1;
        }
    }
    if(!f) printf("0");
}