#include <stdio.h>
int main() {
    int soong, korea, hanyang;
    scanf("%d %d %d", &soong, &korea, &hanyang);
    if(soong+korea+hanyang>=100) printf("OK");
    else if(soong<korea&&soong<hanyang) printf("Soongsil");
    else if(korea<soong&&korea<hanyang) printf("Korea");
    else if(hanyang<soong&&hanyang<korea) printf("Hanyang");
}