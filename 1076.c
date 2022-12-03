#include <stdio.h>
long long int ipow(long long int a, long long int b) {
    long long int i, sum=1;
    for(i=0;i<b;i++) {
        sum*=a;
    }
    return sum;
}
int main() {
    long long int sum=0, i;
    char t[7]={'\0',};
    for(i=0;i<3;i++) {
        scanf("%s", t);
        switch(t[0]) {
            case 'r':
                if(i!=2) sum+=!i?2*10:2;
                else sum*=ipow(10, 2);
                break;
            case 'o':
                if(i!=2) sum+=!i?3*10:3;
                else sum*=ipow(10, 3);
                break;
            case 'y':
                if(i!=2) sum+=!i?4*10:4;
                else sum*=ipow(10, 4);
                break;
            case 'g':
                if(t[3]=='e') {
                    if(i!=2) sum+=!i?5*10:5;
                    else sum*=ipow(10, 5);
                }
                else {
                    if(i!=2) sum+=!i?8*10:8;
                    else sum*=ipow(10, 8);
                }   
                break;
            case 'v':
                if(i!=2) sum+=!i?7*10:7;
                else sum*=ipow(10, 7);
                break;
            case 'w':
                if(i!=2) sum+=!i?9*10:9;
                else sum*=ipow(10, 9);
                break;
            default:
                if(t[1]=='r') {
                    if(i!=2) sum+=!i?1*10:1;
                    else sum*=ipow(10, 1);
                }
                else if(t[2]=='a') {
                    if(i!=2) sum+=!i?0*10:0;
                    else sum*=ipow(10, 0);
                }
                else {
                    if(i!=2) sum+=!i?6*10:6;
                    else sum*=ipow(10, 6);
                }
                break;
        }
    }
    printf("%lld", sum);
}