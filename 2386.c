#include <stdio.h>
int main() {
    int sum=0, i;
    char pcom, a[253]={'\0',};
    scanf("%c", &pcom);
    if(pcom=='#') return 0;
    getchar();
    fgets(a, 252, stdin);
    for(i=0;a[i]!='\0';i++) {
        if((a[i]>='A'&&a[i]<='Z'&&a[i]+32==pcom)||(a[i]>='a'&&a[i]<='z'&&a[i]==pcom)) {
            sum++;
        }
    }
    printf("%c %d\n", pcom, sum);
    main();
}