#include <stdio.h>

int chkend(char t) {
    return t!='\n'&&t!='\0'?1:0;
}

void pushcha(char* t) {
    char pre=0, temp, i;
    for(i=0;t[i];i++) {
        temp=t[i];
        t[i]=pre;
        pre=temp;
    }
    t[i]='\n'; t[i+1]=0;
}

char* trans(char* a, char* b) {
    int f;
    for(int i=0;chkend(a[i]);i+=5) {
        f=0;
        for(int j=0;chkend(b[j]);j++) {
            if(a[i]==b[j]&&!f) {
                b[j]=a[i+2];
                pushcha(&b[j+1]);
                b[j+1]=a[i+3];
                f=1;
            }
            if(b[j]==' ') f=0;
        }
    }
    return b;
}

int main() {
    int T;
    char a[10010], b[10010];
    scanf("%d\n", &T);
    for(int i=0;i<T;i++) {
        fgets(a, 10005,stdin);
        fgets(b, 10005,stdin);
        printf("Transformed strings: %s", trans(a, b));
    }
    return 0;
}
