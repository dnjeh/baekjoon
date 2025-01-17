#include <stdio.h>

int main() {
    int n;
    char t[10110];
    scanf("%d", &n);
    getchar();
    for(int k=0;k<n;k++) {
        int f=0;
        fgets(t, 10105, stdin);
        for(int i=0;t[i];i++) {
            char _t=t[i];
            if(_t=='-'||_t==':') {
                if(!f&&i&&t[i-1]!=' ') printf(" ");
                printf("%c", _t);
                f=0;
                if(t[i+1]!='\n'&&t[i+1]!=' ') {
                    printf(" ");
                    f=1;
                }
            }
            else {
                printf("%c", _t);
                f=0;
            }
        }
    }
    return 0;
}
