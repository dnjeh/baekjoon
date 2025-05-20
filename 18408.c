#include <stdio.h>
int main() {
    int sum=0, t;
    for(int i=0;i<3;i++) {
        scanf("%d", &t);
        sum+=t;
    }
    printf("%d", sum>4?2:1);
}