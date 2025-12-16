#include <stdio.h>
int main() {
    char a[3][15]={"Watermelon", "Pomegranates", "Nuts"};
    int n, t;
    scanf("%d", &n);
    for(int i=0;i<3;i++) {
        scanf("%d", &t);
        if(t<=n) {
            printf("%s", a[i]);
            return 0;
        }
    }
    printf("Nothing");
}