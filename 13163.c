#include <stdio.h>
int main() {
    char t[110];
    int n, f;
    scanf("%d\n", &n);
    getchar();
    for(int i=0;i<n;i++) {
        scanf("%[^\n]s", t);
        getchar();
        f=0;
        for(int j=0;t[j];j++) {
            if(t[j]==' '&&!f) {
                printf("god");
                f=1;
            }
            else if(t[j]!=' '&&f) printf("%c", t[j]);
        }
        printf("\n");
    }
}