#include <stdio.h>

int main() {
    char a[1010];
    int n, sta, end;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%s %d %d", a, &sta, &end);
        for(int j=0;a[j];j++) {
            if(j<sta||j>=end) printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}
