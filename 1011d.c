#include <stdio.h>
int main() {
    unsigned i, t=0;
    for(i=1;t<i%2?(i+1)/2*i:i/2*(i+1)&&i<=92690;i++) {
        printf("%u까지의 합은 %u입니다.\n",i, i%2?(i+1)/2*i: i/2*(i+1));
        t=i%2?(i+1)/2*i:i/2*(i+1);
    }
    printf("종료!");
}