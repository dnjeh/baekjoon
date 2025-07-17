#include <stdio.h>

int main() {
    int n, event=0, oddt=0;
    char a[1000100];
    scanf("%d\n%s", &n, a);
    for(int i=0;i<n;i++) {
        if((a[i]-'0')%2) oddt++;
        else event++;
    }
    printf("%d", oddt<event?0:(oddt>event?1:-1));
    return 0;
}
