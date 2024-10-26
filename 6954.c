#include <stdio.h>
#include <string.h>
int main() {
    char t[10];
    int cnt=-1, now=0, who=0, a=0, b=0;
    for(int i=0;i<52;i++) {
        scanf("%s", t);
        if(!strcmp(t, "ace")) {
            who=i%2;
            cnt=now=4;
        }
        else if(!strcmp(t, "king")) {
            who=i%2;
            cnt=now=3;
        }
        else if(!strcmp(t, "queen")) {
            who=i%2;
            cnt=now=2;
        }
        else if(!strcmp(t, "jack")) {
            who=i%2;
            cnt=now=1;
        }
        if(!cnt) {
            if(who) b+=now;
            else a+=now;
            printf("Player %c scores %d point(s).\n", who?'B':'A', now);
        }
        cnt--;
    }
    printf("Player A: %d point(s).\n", a);
    printf("Player B: %d point(s).", b);
}