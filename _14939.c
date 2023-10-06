#include <stdio.h>
int a[10][10], b[10][10];
void printa() {
    int i, j;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    printf("--------------\n");
}
int fun(int pu) {
    int ret=0, i, j, d;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if(!i&&(pu&(1<<(9-j)))) {
                for(d=-1;d<=1;d++) {
                    if(i+d>=0&&i+d<10) b[i+d][j]=!b[i+d][j];
                    if(d&&j+d>=0&&j+d<10) b[i][j+d]=!b[i][j+d];
                } ret++;
            }
            else if(i&&b[i-1][j]){
                for(d=-1;d<=1;d++) {
                    if(i+d>=0&&i+d<10) b[i+d][j]=!b[i+d][j];
                    if(d&&j+d>=0&&j+d<10) b[i][j+d]=!b[i][j+d];
                } ret++;
            }
        }
    }
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if(b[i][j]) {
                ret=101;
                i=j=10;
            }
        }
    }
    return ret;
}
void set();
int main() {
    int i, j, min, it;
    char t[11];
    for(i=0;i<10;i++) {
        scanf("%s", t);
        for(j=0;j<10;j++) {
            if(t[j]=='O') {
                a[i][j]=1; 
            }
        }
    }
    for(i=0;i<=0b1111111111;i++) {
        set();
        it=fun(i);
        if(i==1||it<min) {
            min=it;
        }
    }
    if(min>100) printf("-1");
    else printf("%d", min);
}
void set() {
    int i, j;
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            b[i][j]=a[i][j];
        }
    }
}