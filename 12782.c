#include <stdio.h>
char a[1000001];
int main() {
    int T, i, tzero, tone, tsum, j;
    char t;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", a);
        getchar();
        tzero=tone=tsum=j=0;
        for(t=getchar();t!='\n';t=getchar(), j++) {
            if(a[j]!=t&&t=='0') tzero++;
            else if(a[j]!=t&&t=='1') tone++;
        }
        if(tzero&&tone) {
            tsum=tzero<tone?tzero:tone;
            tzero-=tsum;
            tone-=tsum;
        }
        tsum+=tzero+=tone;
        printf("%d\n", tsum);
    }
}