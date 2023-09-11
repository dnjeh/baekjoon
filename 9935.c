#include <stdio.h>
#include <string.h>
char a[1000001], b[37], sta[1000001]; 
int bind, sind;
int strcmpp(char com[]) {
    int i;
    for(i=0;i<bind;i++) {
        if(!com[i]||com[i]!=b[i]) return 0;
    }
    return 1;
}
int main() {
    int i; 
    char cmp;
    scanf("%s", a);
    scanf("%s", b);
    bind=strlen(b);
    cmp=b[bind-1];
    for(i=0;a[i];i++) {
        sta[sind++]=a[i];
        if(a[i]==cmp&&sind>=bind&&strcmpp(&sta[sind-bind])) {
            sind-=bind;
        }
    }
    for(i=0;i<sind;i++) {
        printf("%c", sta[i]);
    }
    if(!i) printf("FRULA"); 
}