#include <stdio.h>

int main() {
    int n, f=0, chair=1;
    char t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%c", &t);
        if(t=='S') {
            chair++;
        }
        else {
            if(!f) {
                chair++;
            }
            f=!f;
        }
    }
    printf("%d", n<chair?n:chair);
}
