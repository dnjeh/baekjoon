#include <stdio.h>
int tre[26][2], n;
void pre(int now) {
    printf("%c", now+65);
    if(tre[now][0]) pre(tre[now][0]);
    if(tre[now][1]) pre(tre[now][1]);
}
void ino(int now) {
    if(tre[now][0]) ino(tre[now][0]);
    printf("%c", now+65);
    if(tre[now][1]) ino(tre[now][1]);
}
void pos(int now) {
    if(tre[now][0]) pos(tre[now][0]);
    if(tre[now][1]) pos(tre[now][1]);
    printf("%c", now+65);
}
int main() {
    int i, j, now;
    char t[10];
    scanf("%d\n", &n);
    for(i=0;i<n;i++) {
        fgets(t, 8, stdin);
        now=t[0]-65;
        for(j=2;j<5;j+=2) {
            if(t[j]!='.')
                tre[now][j<3?0:1]=t[j]-65;
        }
    }
    pre(0); printf("\n");
    ino(0); printf("\n");
    pos(0);
}