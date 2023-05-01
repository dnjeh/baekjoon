#include <stdio.h>
char a[102];
int cho(char _t) {
    switch(_t) {
    case 'C': return 12;
    case 'H': return 1;
    case 'O': return 16;
    }
}
int find(int _start) {
    int i, sum=0, t;
    char old=0;
    for(i=_start;a[i]!=')';i++) {
        if(a[i]=='(') {
            if(old) {
                sum+=cho(old);
                old=0;
            }
            t=find(i+1);
            if(a[t/100000+1]<='9'&&a[t/100000+1]>='0') {
                sum+=t%100000*(a[t/100000+1]-48);
                i=t/100000+1;
            }
            else {
                sum+=t%100000;
                i=t/100000;
            }
        }
        else if(old&&a[i]<=90&&a[i]>=65) {
            sum+=cho(old);
            old=a[i];
        }
        else if(old&&a[i]<=57&&a[i]>=48) {
            sum+=cho(old)*(a[i]-48);
            old=0;
        }
        else old=a[i];
    }
    sum+=i*100000;
    if(a[i-1]<=90&&a[i-1]>=65) sum+=cho(a[i-1]);
    return sum;
}
int main() {
    int i;
    scanf("%s", a);
    for(i=100;!a[i];i--) {}
    a[i+1]=')';
    printf("%d", find(0)%100000);
}