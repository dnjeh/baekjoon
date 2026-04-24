#include <stdio.h>
int main() {
    int t, tt;
    for(scanf("%d %d", &t, &tt);t||tt;scanf("%d %d", &t, &tt)) {
        printf("%d\n", t*3-t-tt);
    }
}