#include <stdio.h>
int main() {
    int i, j, T;
    char t[110], a[27];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        while(getchar()!='\n') {}
        fgets(t, 105, stdin);
        scanf("%s", a);
        for(j=0;t[j]!='\n'&&t[j]!='\0';j++) {
            if(t[j]==' ') {
                printf(" ");
            }
            else {
                printf("%c", a[t[j]-65]);
            }
        }
        printf("\n");
    }
}