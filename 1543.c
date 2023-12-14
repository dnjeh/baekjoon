#include <stdio.h>
#include <string.h>
int an, tn;
int is(char* a, char* t, int now) {
    int i;
    if(now+tn>an) return 0;
    for(i=now;i<an&&i<now+tn;i++) { 
        if(a[i] != t[i-now]) {
            return 0; 
        }
    }
    return 1;
}
int main() {
    int i, cnt=0;
    char a[2510], t[60];
    fgets(a, 2505, stdin);
    fgets(t, 55, stdin);
    an=strlen(a)-1;
    tn=strlen(t)-1;
    for(i=0;i<an;i++) {
        if(is(a, t, i)) {
            cnt++;
            i+=tn-1;
        }
    }
    printf("%d", cnt);
}
