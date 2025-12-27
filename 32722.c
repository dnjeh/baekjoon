#include <stdio.h>
int main() {
    int t, a[3][2]={{1, 3}, {6, 8}, {2, 5}};
    for(int i=0;i<3;i++) {
        scanf("%d", &t);
        if(t!=a[i][0]&&t!=a[i][1]) {
            printf("EI");
            return 0;
        }
    }
    printf("JAH");
}