#include <stdio.h>
#include <string.h>
char str[100001], sta[100001];
int main() {
    int now, i, T, j, cnt=0;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", str);
        strcpy(sta, "");
        now=0;
        for(j=0;str[j];j++) {
            if(!now||sta[now]!=str[j]) sta[++now]=str[j];
            else if(str[j]==sta[now]) sta[now--]='\0';
        }
        if(!now) cnt++;
    }
    printf("%d", cnt);
}   