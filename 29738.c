#include <stdio.h>

int main() {
    int T, t;
    char* ct;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &t);
        if(t>4500) ct="Round 1";
        else if(t>1000) ct="Round 2";
        else if(t>25) ct="Round 3";
        else ct="World Finals";
        printf("Case #%d: %s\n", i+1, ct);
    }
}
