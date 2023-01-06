#include <stdio.h>
int main() {
    long long int d, t[3]={0, }, y, tim[2]={0, }, i, intm=0;
    char m[10];
    double a;
    scanf("%s %lld, %lld %lld:%lld", m, &d, &y, &t[0], &t[1]);
    tim[0]+=t[1];
    tim[0]+=t[0]*60;
    tim[0]+=(d-1)*24*60;
    switch(m[0]) {
        case 'D':
            intm++;
        case 'N':
            intm++;
        case 'O':
            intm++;
        case 'S':
            intm+=4;
        case 'M':
            intm++;
            if(m[2]!='r') {
                intm+=2;
            }
        case 'F':
            intm+=2;
            break;
        case 'A':
            if(m[1]=='u') {
                intm=8;
            }
            else {
                intm=4;
            }
            break;
        default:
            if(m[1]=='a') {
                intm=1;
            }
            else {
                if(m[2]=='n') {
                    intm=6;
                }
                else {
                    intm=7;
                }
            }
            break;
    }
    for(i=intm-1;i>0;i--) {
        switch(i) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
                tim[0]+=31*24*60;
                break;
            case 4: case 6: case 9: case 11: 
                tim[0]+=30*24*60;
                break;
            default:
                if(!(y%400)||!(y%4)&&(y%100)) {
                    tim[0]+=29*24*60;
                }   
                else {
                    tim[0]+=28*24*60;
                }   
                break;
        }
    }
    if(!(y%400)||!(y%4)&&(y%100)) {
        tim[1]=366*24*60;
    }   
    else {
        tim[1]=365*24*60;
    }   
    a=tim[0]*100/(double)tim[1];
    if(!tim[0]) {
        printf("0.0");
    }
    else {
        printf("%.15lf", a);
    }
}   