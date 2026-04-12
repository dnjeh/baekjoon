#include <stdio.h>
int main() {
    char t;
    int n, cnt=0;
    scanf("%d", &n);
    getchar();
    for(int i=0;i<n;i++) {
        scanf("%c", &t);
        if(t=='O') cnt++;
    }
    if(cnt*2>=n) printf("Yes");
    else printf("No");
} 
