#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%.09lf\n%.09lf", 100.0/a, 100.0/(100-a));
    return 0;
}
