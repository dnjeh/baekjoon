#include <stdio.h>

int main() {
    int n, cnt=0, rise, t, tcnt=0, prin=0;
    scanf("%d %d", &n, &rise);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(t<rise) cnt++;
        if(rise!=t) tcnt++;
    }
    if(tcnt-cnt<cnt) prin=1;
    else if(tcnt-cnt>cnt) prin=2; 
    else prin=0;
    printf("%d", prin);
}
