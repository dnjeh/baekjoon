#include <stdio.h>
int main() {
    int n, _t;
    char t[300];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %s", &_t, t);
        for(int j=0;t[j];j++) {
            if(t[j]==' ') t[j]=':';
        }
    }
}