#include <stdio.h>
char b[1000001]={'\0',};
int main() {
    char max[2];
    int a[26]={0,}, i;
    scanf("%s", b);
    for(i=0;b[i]!='\0';i++) {
        a[(b[i]>=97)?(b[i]-97):(b[i]-65)]++;
    }
    for(i=0;i<26;i++) {
        if(i==0||max[0]<a[i]) {
            max[0]=a[i];
            max[1]=i;
        }
        else if(max[0]==a[i]&&max[0]!=0) {
            printf("?");
            return 0;
        }
    }
    printf("%c", max[1]+65);
}



