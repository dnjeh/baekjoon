#include <stdio.h>

int main() {
    int n, cnt=0;
    char t[510];
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=1;t[j];j++) {
            if(t[j-1]=='0'&&t[j]=='1'||t[j-1]=='O'&&t[j]=='I') {
                cnt++;
                break;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
