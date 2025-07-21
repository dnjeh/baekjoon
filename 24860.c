#include <stdio.h>

int main() {
    long long int vk, jk, vn, jn, vh, dh, jh;
    scanf("%lld %lld %lld %lld %lld %lld %lld", &vk, &jk, &vn, &jn, &vh, &dh, &jh);
    printf("%lld", vk*jk*vh*dh*jh+vn*jn*vh*dh*jh);
    return 0;
}
