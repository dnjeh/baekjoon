#include <stdio.h>
char sta[30], ind;
void sputs() {
    for(ind--;ind>=0;ind--) printf("%c", sta[ind]);
    ind=0;
}
int main() {
    char t[1010];
    int i, T, j;
    scanf("%d\n", &T);
    for(i=0;i<T;i++) {
        fgets(t, 1010, stdin);
        for(j=0;t[j]!='\n'&&t[j]!='\0';j++) {
            if(t[j]==' ') {
                sputs();
                printf(" ");
            }
            else sta[ind++]=t[j];
        } sputs();
        printf("\n");
    }
}