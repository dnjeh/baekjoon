#include <stdio.h>

int fun(char a[][210], int* i, int* j) {
    int ret=0;
    for(;a[0][*i]!='\"'||a[1][*j]!='\"';) {
        //printf("%d %d\n", *i, *j);
        if(a[0][*i]!=a[1][*j]) ret=1;
        if(a[0][*i]!='\"') (*i)++;
        if(a[1][*j]!='\"') (*j)++;
    }
    return ret;
}

int main() {
    int f;
    char a[2][210];
    for(scanf(" %s", a[0]);a[0][0]!='.';scanf(" %s", a[0])) {
        scanf(" %s", a[1]);
        int i, j;
        f=0;
        for(i=0, j=0;a[0][i]&&a[1][j];i++, j++) {
            if(a[0][i]=='\"'&&a[1][j]==a[0][i]) {
                i++;
                j++;
                if(fun(a, &i, &j)) f++;
            }
            else if(a[0][i]!=a[1][j]) break;
            if(f>=2) break;
        }
        //printf("%d\n", f);
        if(a[0][i]||a[1][j]||f>=2) printf("DIFFERENT");
        else if(f) printf("CLOSE");
        else printf("IDENTICAL");
        printf("\n");
    }
    return 0;
}
