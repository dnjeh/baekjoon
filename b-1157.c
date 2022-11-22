#include <stdio.h>
int main() {
    char max[2], t;
    int a[26]={0,}, i, it=0;
    for(;scanf("%c", &t)!=EOF;) {
        a[(t>=97)?(t-97):(t-65)]++;
    }
    for(i=0;i<26;i++) {
        if(i==0||max[0]<a[i]) {
            max[0]=a[i];
            max[1]=i;
            it=0;
        }
        else if(max[0]==a[i]&&max[0]!=0) {
            it++;
        }
    }
    if(it) {
        printf("?");
        return 0;
    }
    printf("%c", max[1]+65);
}



