#include <stdio.h>
int main() {
    int i, j, f;
    char t[40];
    for(i=0;i<15;i++) {
        fgets(t, 35, stdin);
        for(j=0;t[j]&&t[j]!='\n';j++) {
            if(t[j]=='w') f=1;
            else if(t[j]=='b') f=2;
            else if(t[j]=='g') f=3;
        }
    }
    switch(f) {
    case 1:
        printf("chunbae");
        break;
    case 2:
        printf("nabi");
        break;
    case 3:
        printf("yeongcheol");
        break;
    }
}