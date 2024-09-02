#include <stdio.h>
#include <string.h>

int main() {
    int n, cnt=0, c[28]={0, };
    char a[55], b[55];
    scanf("%s %s", a, b);
    n=strlen(a);
    for(int i=0;a[i];i++) {
        c[a[i]-65]++;
        c[b[i]-65]--;
    }
    for(int i=0;i<26;i++) {
        if(c[i]) {
            printf("-1");
            return 0;
        }
    }
    for(int i=n-1, j=n-1;i>=0;i--) {
        if(a[i]==b[j]) j--;
        else cnt++;
    }
    printf("%d", cnt);
    return 0;
}
