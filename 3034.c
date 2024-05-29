#include <stdio.h>
int main() {
    int n, h, w, t;
    scanf("%d %d %d", &n, &h, &w);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(h*h+w*w>=t*t) printf("DA\n");
        else printf("NE\n");
    }
}