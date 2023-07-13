#include <stdio.h>
int l, c, now[15], alp[26];
void bac(int min, int cnt) {
    int i, j;
    if(cnt>=l) {
        for(i=0;i<l;i++) printf("%c", now[i]+97);
        printf("\n");
    }
    else {
        for(i=min;i<26;i++) if(alp[i]) {
            now[cnt]=i;
            alp[i]--;
            bac(i, cnt+1);
            alp[i]++;
        }
    }
}
int main() {
    int i;
    char t[2];
    scanf("%d %d", &l, &c);
    for(i=0;i<c;i++) {
        scanf("%s", t);
        alp[t[0]-97]++;
    }
    bac(0, 0);
}