#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int(*)[2])a)[0]-(*(int(*)[2])b)[0];
}
int compare2(const void* a, const void* b) {
    return (*(int(*)[2])a)[1]-(*(int(*)[2])b)[1];
}

int main() {
    int a[8][2], sum=0;
    for(int i=0;i<8;i++) {
        scanf("%d", &a[i][0]);
        a[i][1]=i;
    }
    qsort(a, 8, sizeof(a[0]), compare);
    for(int i=3;i<8;i++) sum+=a[i][0];
    qsort(a+3, 5, sizeof(a[0]), compare2);
    printf("%d\n", sum);
    for(int i=3;i<8;i++) {
        printf("%d ", a[i][1]+1);
    }
} 