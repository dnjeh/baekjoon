#include <stdio.h>
int main() {
    int sum=0, t;
    for(scanf("%d", &t);t!=-1;scanf("%d", &t))
        sum+=t;
    printf("%d", sum);
}