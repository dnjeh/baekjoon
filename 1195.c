#include <stdio.h>
#include <string.h>
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int min=-1, n, m, t;
    char a[110], b[110];
    scanf("%s\n%s", a, b);
    n=strlen(a); m=strlen(b);
    for(int pre=m;pre>-n;pre--) {
        int f=0, tcnt=0;
        for(int i=0;!f&&i<n;i++) {
            if(i+pre<m&&i+pre>=0) {
                tcnt++; 
                if(a[i]=='2'&&b[i+pre]=='2') f=1;
            }
        }
        if(!f&&(min>(t=n+m-tcnt))||min==-1) 
            min=t;
    }
    printf("%d", min);
}