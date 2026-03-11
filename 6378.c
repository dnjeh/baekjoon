#include <stdio.h>
int main() {
    char a[1001];
    int tsum;
    for(scanf("%s", a);a[0]!='0';scanf("%s", a)) {
        tsum=0;
        for(int i=0;a[i];i++) tsum+=a[i]-'0';
        for(;tsum/10;) {
            int _tsum;
            for(_tsum=0;tsum;tsum/=10) {
                _tsum+=tsum%10;
            }
            tsum=_tsum;
        }
        printf("%d\n", tsum);
    }
}