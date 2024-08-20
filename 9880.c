#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int(*)[2])a)[1]-(*(int(*)[2])b)[1];
}

int main() {
    int a[150][2]={{0, },}, n, one=-1, two=-1, cnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    qsort(a, n, sizeof(a[0]), compare);
    for(int i=0;i<n;i++) {
        if(one<=a[i][0]&&two<=a[i][0]) {
            if(one>two) one=a[i][1];
            else two=a[i][1];
            cnt++;
        }
        else if(one<=a[i][0]) {
            one=a[i][1];
            cnt++;
        }
        else if(two<=a[i][0]) {
            two=a[i][1];
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
